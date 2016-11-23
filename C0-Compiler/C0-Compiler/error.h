#pragma once

#define	UNDEF_ID			1		//未声明标识符
#define	MULTI_DEF			2		//重定义标识符
#define	ID_TOO_LONG			3		//标识符过长
#define	PROGRAM_ERROR		4		//程序结构错误
#define	STR_CONTENT_ERROR	5		//字符串内容错误
#define	STR_TOO_LONG		6		//字符串超长
#define	ZERO_HEAD_NUM		7		//非零数字以0开头
#define	NUM_HEAD_IDENT		8		//数字开头的标识符
#define	NUM_TOO_LARGE		9		//数字太大
//#define	UNDEF_INPUT			10		//不合法输入	
#define	CHAR_MISS_QUOTE		11		//字符类型丢失后一个单引号'
#define	CHAR_CONTENT_ERROR	12		//字符内容不合法
#define	CHAR_OVERFLOW		13		//字符溢出	
#define	NEQUAL_MISS			14		//错误使用不等号，只有！没有等号
#define	MISSING_SEMI		15		//丢失分号
#define	MISSING_RPARENT		16		//丢失右括号
#define	MISSING_RBRACK		17		//丢失右中括号
#define	MISSING_RBRACE		18		//丢失右大括号
#define	MISSING_IDENT		19		//丢失标识符
//#define	ERROR_PARA_NUM		20		//参数数目错误
#define	MISSING_LPARENT		21		//丢失左括号
#define	MISSING_LBRACK		22		//丢失左中括号
#define	MISSING_LBRACE		23		//丢失左大括号
#define	MISSING_PLUS		24		//丢失加号或减号
#define	MISSING_MULTI		25		//丢失乘号或除号
#define	ASSIGN_ERROR		26		//赋值时发生错误
#define	RETURN_ERROR		27		//返回值错误
#define	MISSING_MAIN		28		//丢失main函数
#define	MISSING_RETURN		29		//丢失return语句
#define	EXPRESSION_ERROR	30		//表达式错误
//#define	CONST_NOT_INIT		31		//常量使用前未初始化
//#define	VAR_NOT_INIT		32		//变量使用前未初始化
//#define	FUNC_NO_RET			33		//无返回值函数当做表达式使用
#define	OUT_OF_TABLE		34		//符号表满了
#define	OUT_OF_ARRAY		35		//数组溢出
#define	WRONG_TYPE			36		//声明类型错误
#define	MISSING_ASSIGN		37		//丢失等号
#define MISSING_COLON		38		//丢失冒号
#define MISSING_VOID		39		//丢失VOID
#define MISSING_DOUQUOTE	40		//丢失双引号