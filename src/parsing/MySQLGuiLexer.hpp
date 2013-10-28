/** \file
 *  This C++ header file was generated by $ANTLR version 3.5.2-SNAPSHOT
 *
 *     -  From the grammar source file : MySQLGuiLexer.g
 *     -                            On : 2013-10-28 00:34:39
 *     -                 for the lexer : MySQLGuiLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
 * The lexer MySQLGuiLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Gokulakannan Somasundaram. 
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_MySQLGuiLexer_H
#define _MySQLGuiLexer_H
/* =============================================================================
 * Standard antlr3 C++ runtime definitions
 */
#include <antlr3.hpp>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */


#include "UserGuiTraits.hpp"
#include <vector>




#ifdef	WIN32
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
namespace  Antlr3GuiImpl  {

typedef MySQLGuiLexerTraits MySQLGuiLexerImplTraits;


class MySQLGuiLexerTokens
{
public:
	/** Symbolic definitions of all the tokens that the lexer will work with.
	 *
	 * Antlr will define EOF, but we can't use that as it it is too common in
	 * in C header files and that would be confusing. There is no way to filter this out at the moment
	 * so we just undef it here for now. That isn't the value we get back from C recognizers
	 * anyway. We are looking for ANTLR_TOKEN_EOF.
	 */
	enum Tokens 
	{
		EOF_TOKEN = MySQLGuiLexerImplTraits::CommonTokenType::TOKEN_EOF
		, ABS = 4 
		, ACOS = 5 
		, ADDDATE = 6 
		, ADDTIME = 7 
		, AES_DECRYPT = 8 
		, AES_ENCRYPT = 9 
		, ALL_FIELDS = 10 
		, AND_SYM = 11 
		, ARROW = 12 
		, ASCII_SYM = 13 
		, ASIN = 14 
		, ASTERISK = 15 
		, ATAN = 16 
		, ATAN2 = 17 
		, AVG = 18 
		, BACKTICKED_ID = 19 
		, BENCHMARK = 20 
		, BIN = 21 
		, BIND_VAR = 22 
		, BIND_VAR_WITH_PARAMS = 23 
		, BITAND = 24 
		, BIT_AND = 25 
		, BIT_LENGTH = 26 
		, BIT_NUM = 27 
		, BIT_OR = 28 
		, BIT_XOR = 29 
		, BUILDIN_FUNCTIONS = 30 
		, CEIL = 31 
		, CEILING = 32 
		, CHAR = 33 
		, CHARSET = 34 
		, CHAR_FUNCTIONS = 35 
		, CHAR_LENGTH = 36 
		, COERCIBILITY = 37 
		, COLLATION = 38 
		, COMMA = 39 
		, COMMENT_ML = 40 
		, COMMENT_ML_END = 41 
		, COMMENT_ML_PART = 42 
		, COMMENT_SL = 43 
		, CONCAT = 44 
		, CONCAT_WS = 45 
		, CONNECTION_ID = 46 
		, CONV = 47 
		, CONVERT_TZ = 48 
		, COS = 49 
		, COT = 50 
		, COUNT = 51 
		, CRC32 = 52 
		, CURDATE = 53 
		, CURRENT_USER = 54 
		, CURTIME = 55 
		, DATABASE = 56 
		, DATEDIFF = 57 
		, DATE_ADD = 58 
		, DATE_FORMAT = 59 
		, DATE_SUB = 60 
		, DATE_SYM = 61 
		, DAYNAME = 62 
		, DAYOFMONTH = 63 
		, DAYOFWEEK = 64 
		, DAYOFYEAR = 65 
		, DECODE = 66 
		, DEFAULT = 67 
		, DEGREES = 68 
		, DES_DECRYPT = 69 
		, DES_ENCRYPT = 70 
		, DIVIDE = 71 
		, DOT = 72 
		, ELT = 73 
		, ENCODE = 74 
		, ENCRYPT = 75 
		, EQ_SYM = 76 
		, EXP = 77 
		, EXPORT_SET = 78 
		, EXTRACT = 79 
		, FIELD = 80 
		, FIND_IN_SET = 81 
		, FLOOR = 82 
		, FORMAT = 83 
		, FOUND_ROWS = 84 
		, FROM_BASE64 = 85 
		, FROM_DAYS = 86 
		, FROM_UNIXTIME = 87 
		, GET = 88 
		, GET_FORMAT = 89 
		, GET_LOCK = 90 
		, GROUP_CONCAT = 91 
		, GROUP_FUNCTIONS = 92 
		, GTH = 93 
		, HEX = 94 
		, HEX_DIGIT = 95 
		, HEX_DIGIT_FRAGMENT = 96 
		, HOUR = 97 
		, ID = 98 
		, IF = 99 
		, IFNULL = 100 
		, INET_ATON = 101 
		, INET_NTOA = 102 
		, INSERT = 103 
		, INSTR = 104 
		, IS_FREE_LOCK = 105 
		, IS_USED_LOCK = 106 
		, LAST_DAY = 107 
		, LAST_INSERT_ID = 108 
		, LBRACK = 109 
		, LEFT = 110 
		, LENGTH = 111 
		, LET = 112 
		, LN = 113 
		, LOAD_FILE = 114 
		, LOCATE = 115 
		, LOG = 116 
		, LOG10 = 117 
		, LOG2 = 118 
		, LOWER = 119 
		, LPAD = 120 
		, LPAREN = 121 
		, LTH = 122 
		, LTRIM = 123 
		, MAKEDATE = 124 
		, MAKETIME = 125 
		, MAKE_SET = 126 
		, MASTER_POS_WAIT = 127 
		, MAX_SYM = 128 
		, MD5 = 129 
		, MICROSECOND = 130 
		, MID = 131 
		, MINUS = 132 
		, MINUTE = 133 
		, MIN_SYM = 134 
		, MOD = 135 
		, MOD_SYM = 136 
		, MONTH = 137 
		, MONTHNAME = 138 
		, MYSQL_RESERVED = 139 
		, NAME_CONST = 140 
		, NEGATION = 141 
		, NEWLINE = 142 
		, NOT_EQ = 143 
		, NOW = 144 
		, NUMBER_FUNCTIONS = 145 
		, NUMBER_LIT = 146 
		, OCT = 147 
		, OLD_PASSWORD = 148 
		, ORD = 149 
		, OR_SYM = 150 
		, OTHER_FUNCTIONS = 151 
		, PASSWORD = 152 
		, PERIOD_ADD = 153 
		, PERIOD_DIFF = 154 
		, PI = 155 
		, PLUS = 156 
		, POW = 157 
		, POWER = 158 
		, POWER_OP = 159 
		, QUARTER = 160 
		, QUOTE = 161 
		, RADIANS = 162 
		, RAND = 163 
		, RBRACK = 164 
		, REAL_NUMBER = 165 
		, REGULAR_ID = 166 
		, RELEASE_LOCK = 167 
		, REPEAT = 168 
		, REPLACE = 169 
		, REVERSE = 170 
		, RIGHT = 171 
		, ROUND = 172 
		, RPAD = 173 
		, RPAREN = 174 
		, RTRIM = 175 
		, SCHEMA = 176 
		, SECOND = 177 
		, SEC_TO_TIME = 178 
		, SEMI = 179 
		, SESSION_USER = 180 
		, SET_VAR = 181 
		, SHIFT_LEFT = 182 
		, SHIFT_RIGHT = 183 
		, SIGN = 184 
		, SIN = 185 
		, SLEEP = 186 
		, SOUNDEX = 187 
		, SPACE = 188 
		, SPACE_LIT = 189 
		, SQRT = 190 
		, STD = 191 
		, STDDEV = 192 
		, STDDEV_POP = 193 
		, STDDEV_SAMP = 194 
		, STRCMP = 195 
		, STRING_LITERAL = 196 
		, STR_TO_DATE = 197 
		, SUBSTRING = 198 
		, SUBSTRING_INDEX = 199 
		, SUBTIME = 200 
		, SUM = 201 
		, SYSDATE = 202 
		, SYSTEM_USER = 203 
		, TAN = 204 
		, TEXT_STRING = 205 
		, TIMEDIFF = 206 
		, TIMESTAMP = 207 
		, TIMESTAMPADD = 208 
		, TIMESTAMPDIFF = 209 
		, TIME_FORMAT = 210 
		, TIME_FUNCTIONS = 211 
		, TIME_SYM = 212 
		, TIME_TO_SEC = 213 
		, TOKEN_FAILURE = 214 
		, TO_BASE64 = 215 
		, TO_DAYS = 216 
		, TO_SECONDS = 217 
		, TRIM = 218 
		, TRUNCATE = 219 
		, UNHEX = 220 
		, UNIX_TIMESTAMP = 221 
		, UNSIGNED_INTEGER = 222 
		, UPPER = 223 
		, USER = 224 
		, USER_VAR = 225 
		, USER_VAR_SUBFIX2 = 226 
		, USER_VAR_SUBFIX3 = 227 
		, USER_VAR_SUBFIX4 = 228 
		, UTC_DATE = 229 
		, UTC_TIME = 230 
		, UTC_TIMESTAMP = 231 
		, UUID = 232 
		, VALUES = 233 
		, VARIANCE = 234 
		, VAR_POP = 235 
		, VAR_SAMP = 236 
		, VERSION_SYM = 237 
		, VERTBAR = 238 
		, WEEK = 239 
		, WEEKDAY = 240 
		, WEEKOFYEAR = 241 
		, WEIGHT_STRING = 242 
		, WHITE = 243 
		, YEAR = 244 
		, YEARWEEK = 245 
	};
       const ANTLR_UINT8* getTokenName(ANTLR_INT32 index) const;

protected:
       static ANTLR_UINT8* TokenNames[];
};

/** Context tracking structure for MySQLGuiLexer
 */
class MySQLGuiLexer : public MySQLGuiLexerImplTraits::BaseLexerType, public MySQLGuiLexerTokens
{
public:
	typedef MySQLGuiLexerImplTraits ImplTraits;
	typedef MySQLGuiLexer ComponentType;
	typedef ComponentType::StreamType StreamType;
	typedef MySQLGuiLexerImplTraits::BaseLexerType BaseType;
	typedef ImplTraits::RecognizerSharedStateType<StreamType> RecognizerSharedStateType;
	typedef StreamType InputType;
	static const bool IsFiltered = false;


private:	
public:
    MySQLGuiLexer(InputType* instream);
    MySQLGuiLexer(InputType* instream, RecognizerSharedStateType* state);

    void init(InputType* instream  );


    
    void  mMYSQL_RESERVED( );
    void  mABS( );
    void  mACOS( );
    void  mADDDATE( );
    void  mADDTIME( );
    void  mAES_DECRYPT( );
    void  mAES_ENCRYPT( );
    void  mASCII_SYM( );
    void  mASIN( );
    void  mATAN( );
    void  mATAN2( );
    void  mAVG( );
    void  mBENCHMARK( );
    void  mBIN( );
    void  mBIT_AND( );
    void  mBIT_LENGTH( );
    void  mBIT_OR( );
    void  mBIT_XOR( );
    void  mCEIL( );
    void  mCEILING( );
    void  mCHAR( );
    void  mCHARSET( );
    void  mCHAR_LENGTH( );
    void  mCOERCIBILITY( );
    void  mCOLLATION( );
    void  mCONCAT( );
    void  mCONCAT_WS( );
    void  mCONNECTION_ID( );
    void  mCONV( );
    void  mCONVERT_TZ( );
    void  mCOS( );
    void  mCOT( );
    void  mCOUNT( );
    void  mCRC32( );
    void  mCURDATE( );
    void  mCURRENT_USER( );
    void  mCURTIME( );
    void  mDATABASE( );
    void  mDATEDIFF( );
    void  mDATE_ADD( );
    void  mDATE_FORMAT( );
    void  mDATE_SUB( );
    void  mDATE_SYM( );
    void  mDAYNAME( );
    void  mDAYOFMONTH( );
    void  mDAYOFWEEK( );
    void  mDAYOFYEAR( );
    void  mDECODE( );
    void  mDEFAULT( );
    void  mDEGREES( );
    void  mDES_DECRYPT( );
    void  mDES_ENCRYPT( );
    void  mELT( );
    void  mENCODE( );
    void  mENCRYPT( );
    void  mEXP( );
    void  mEXPORT_SET( );
    void  mEXTRACT( );
    void  mFIELD( );
    void  mFIND_IN_SET( );
    void  mFLOOR( );
    void  mFORMAT( );
    void  mFOUND_ROWS( );
    void  mFROM_BASE64( );
    void  mFROM_DAYS( );
    void  mFROM_UNIXTIME( );
    void  mGET_FORMAT( );
    void  mGET_LOCK( );
    void  mGROUP_CONCAT( );
    void  mHEX( );
    void  mHOUR( );
    void  mIF( );
    void  mIFNULL( );
    void  mINET_ATON( );
    void  mINET_NTOA( );
    void  mINSERT( );
    void  mINSTR( );
    void  mIS_FREE_LOCK( );
    void  mIS_USED_LOCK( );
    void  mLAST_DAY( );
    void  mLAST_INSERT_ID( );
    void  mLEFT( );
    void  mLENGTH( );
    void  mLN( );
    void  mLOAD_FILE( );
    void  mLOCATE( );
    void  mLOG( );
    void  mLOG10( );
    void  mLOG2( );
    void  mLOWER( );
    void  mLPAD( );
    void  mLTRIM( );
    void  mMAKEDATE( );
    void  mMAKETIME( );
    void  mMAKE_SET( );
    void  mMASTER_POS_WAIT( );
    void  mMAX_SYM( );
    void  mMD5( );
    void  mMICROSECOND( );
    void  mMID( );
    void  mMINUTE( );
    void  mMIN_SYM( );
    void  mMOD( );
    void  mMONTH( );
    void  mMONTHNAME( );
    void  mNAME_CONST( );
    void  mNOW( );
    void  mOCT( );
    void  mOLD_PASSWORD( );
    void  mORD( );
    void  mPASSWORD( );
    void  mPERIOD_ADD( );
    void  mPERIOD_DIFF( );
    void  mPI( );
    void  mPOW( );
    void  mPOWER( );
    void  mQUARTER( );
    void  mQUOTE( );
    void  mRADIANS( );
    void  mRAND( );
    void  mRELEASE_LOCK( );
    void  mREPEAT( );
    void  mREPLACE( );
    void  mREVERSE( );
    void  mRIGHT( );
    void  mROUND( );
    void  mRPAD( );
    void  mRTRIM( );
    void  mSCHEMA( );
    void  mSECOND( );
    void  mSEC_TO_TIME( );
    void  mSESSION_USER( );
    void  mSIGN( );
    void  mSIN( );
    void  mSLEEP( );
    void  mSOUNDEX( );
    void  mSPACE( );
    void  mSQRT( );
    void  mSTD( );
    void  mSTDDEV( );
    void  mSTDDEV_POP( );
    void  mSTDDEV_SAMP( );
    void  mSTRCMP( );
    void  mSTR_TO_DATE( );
    void  mSUBSTRING( );
    void  mSUBSTRING_INDEX( );
    void  mSUBTIME( );
    void  mSUM( );
    void  mSYSDATE( );
    void  mSYSTEM_USER( );
    void  mTAN( );
    void  mTIMEDIFF( );
    void  mTIMESTAMP( );
    void  mTIMESTAMPADD( );
    void  mTIMESTAMPDIFF( );
    void  mTIME_FORMAT( );
    void  mTIME_SYM( );
    void  mTIME_TO_SEC( );
    void  mTO_BASE64( );
    void  mTO_DAYS( );
    void  mTO_SECONDS( );
    void  mTRIM( );
    void  mTRUNCATE( );
    void  mUNHEX( );
    void  mUNIX_TIMESTAMP( );
    void  mUPPER( );
    void  mUSER( );
    void  mUTC_DATE( );
    void  mUTC_TIME( );
    void  mUTC_TIMESTAMP( );
    void  mUUID( );
    void  mVALUES( );
    void  mVARIANCE( );
    void  mVAR_POP( );
    void  mVAR_SAMP( );
    void  mVERSION_SYM( );
    void  mWEEK( );
    void  mWEEKDAY( );
    void  mWEEKOFYEAR( );
    void  mWEIGHT_STRING( );
    void  mYEAR( );
    void  mYEARWEEK( );
    void  mNUMBER_FUNCTIONS( );
    void  mCHAR_FUNCTIONS( );
    void  mTIME_FUNCTIONS( );
    void  mOTHER_FUNCTIONS( );
    void  mGROUP_FUNCTIONS( );
    void  mBUILDIN_FUNCTIONS( );
    void  mUNSIGNED_INTEGER( );
    void  mREAL_NUMBER( );
    void  mHEX_DIGIT_FRAGMENT( );
    void  mHEX_DIGIT( );
    void  mBIT_NUM( );
    void  mNUMBER_LIT( );
    void  mDIVIDE( );
    void  mMOD_SYM( );
    void  mOR_SYM( );
    void  mAND_SYM( );
    void  mARROW( );
    void  mEQ_SYM( );
    void  mNOT_EQ( );
    void  mLET( );
    void  mGET( );
    void  mSET_VAR( );
    void  mSHIFT_LEFT( );
    void  mSHIFT_RIGHT( );
    void  mALL_FIELDS( );
    void  mSEMI( );
    void  mDOT( );
    void  mCOMMA( );
    void  mASTERISK( );
    void  mRPAREN( );
    void  mLPAREN( );
    void  mRBRACK( );
    void  mLBRACK( );
    void  mPLUS( );
    void  mMINUS( );
    void  mNEGATION( );
    void  mVERTBAR( );
    void  mBITAND( );
    void  mPOWER_OP( );
    void  mGTH( );
    void  mLTH( );
    void  mSPACE_LIT( );
    void  mNEWLINE( );
    void  mWHITE( );
    void  mCOMMENT_SL( );
    void  mCOMMENT_ML( );
    void  mID( );
    void  mBACKTICKED_ID( );
    void  mREGULAR_ID( );
    void  mTEXT_STRING( );
    void  mUSER_VAR( );
    void  mUSER_VAR_SUBFIX2( );
    void  mUSER_VAR_SUBFIX3( );
    void  mUSER_VAR_SUBFIX4( );
    void  mSTRING_LITERAL( );
    void  mCOMMENT_ML_PART( );
    void  mCOMMENT_ML_END( );
    void  mBIND_VAR( );
    void  mTOKEN_FAILURE( );
    void  mTokens( );
    const char *    getGrammarFileName();
    void            reset();
    ~MySQLGuiLexer();

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//

/* End of token definitions for MySQLGuiLexer
 * =============================================================================
 */

}

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
