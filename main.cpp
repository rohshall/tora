/****************************************************************************
 *
 * TOra - An Oracle Toolkit for DBA's and developers
 * Copyright (C) 2000 GlobeCom AB
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 *      As a special exception, you have permission to link this program
 *      with the Qt and Oracle Client libraries and distribute executables,
 *      as long as you follow the requirements of the GNU GPL in regard to
 *      all of the software in the executable aside from Qt and Oracle client
 *      libraries.
 *
 ****************************************************************************/

TO_NAMESPACE;

#include <unistd.h>

#include <qapplication.h>

#include "tomain.h"
#include "toconf.h"
#include "tohighlightedtext.h"
#include "toabout.h"
#include "tosql.h"

#include <stdio.h>

#ifndef MONOLITHIC
#include <dlfcn.h>

#include <qdir.h>
#include <qfileinfo.h>
#include <qlabel.h>
#include <qprogressbar.h>
#endif

bool toMonolithic(void)
{
#ifdef TOMONOLITHIC
  return true;
#else
  return false;
#endif
}

int main(int argc,char **argv)
{
  try {
    QApplication mainApp(argc,argv);

#ifdef ENABLE_STYLE
    QString style=toTool::globalConfig(CONF_STYLE,"");
    if (!style.isEmpty())
      toSetSessionType(style);
#endif

#ifndef TOMONOLITHIC
    {
      toSplash splash(NULL,"About TOra",false);
      splash.show();
      list<QString> failed;
      QString dirPath=toTool::globalConfig(CONF_PLUGIN_DIR,DEFAULT_PLUGIN_DIR);
      QDir d(dirPath,"*.so",QDir::Name,QDir::Files);
      for (unsigned int i=0;i<d.count();i++) {
	failed.insert(failed.end(),d.filePath(d[i]));
      }
      QProgressBar *progress=splash.progress();
      QLabel *label=splash.label();
      progress->setTotalSteps(failed.size());
      progress->setProgress(1);
      mainApp.processEvents();
      bool success;
      do {
	success=false;
	list<QString> current=failed;
	failed.clear();
	for(list<QString>::iterator i=current.begin();i!=current.end();i++) {
	  if (!dlopen(*i,RTLD_LAZY|RTLD_GLOBAL)) {
	    failed.insert(failed.end(),*i);
	  } else {
	    success=true;
	    progress->setProgress(progress->progress()+1);
	    QString str("Loaded plugin ");
	    QFileInfo file(*i);
	    str+=file.fileName();
	    label->setText(str);
	    mainApp.processEvents();
	  }
	}
      } while(failed.begin()!=failed.end()&&success);
      for(list<QString>::iterator i=failed.begin();i!=failed.end();i++)
	if (!dlopen(*i,RTLD_LAZY|RTLD_GLOBAL))
	  printf("Failed to load %s\n  %s\n",
		 (const char *)(*i),dlerror());
    }
#endif

    toSQL::loadSQL(toTool::globalConfig(CONF_SQL_FILE,DEFAULT_SQL_FILE));

    toDefaultAnalyzer().updateSettings();

    otl_connect::otl_initialize(1);

    if (toTool::globalConfig("LastVersion","")!=TOVERSION) {
      toAbout *about=new toAbout(NULL,"About TOra",true);
      if (!about->exec()) {
	exit (2);
      }
      delete about;
      toTool::globalSetConfig("LastVersion",TOVERSION);
    }

    if (argc>2||(argc==2&&argv[1][0]=='-')) {
      printf("Usage:\n\n  tora [{X options}] [connectstring]\n\n");
      exit(2);
    } else if (argc==2) {
      QString connect=argv[1];
      QString user;
      int pos=connect.find("@");
      if (pos>-1) {
	user=connect.left(pos);
	connect=connect.right(connect.length()-pos-1);
      } else {
	user=connect;
	if (getenv("ORACLE_SID"))
	  connect=getenv("ORACLE_SID");
      }
      if (!connect.isEmpty())
	toTool::globalSetConfig(CONF_DATABASE,connect);
      pos=user.find("/");
      if (pos>-1) {
	toTool::globalSetConfig(CONF_PASSWORD,user.right(user.length()-pos-1));
	user=user.left(pos);
      }
      if (!user.isEmpty())
	toTool::globalSetConfig(CONF_USER,user);
    }

    toMain *mainWidget=new toMain;

    mainWidget->createDefault();
    
    return mainApp.exec();
  } catch (const otl_exception &exc) {
    printf("Unhandled exception:\n%s\n",exc.msg);
  } catch (const QString &str) {
    printf("Unhandled exception:\n%s\n",(const char *)str);
  } catch (...) {
    printf("Unhandled exception:\nUnknown type\n");
  }
}
