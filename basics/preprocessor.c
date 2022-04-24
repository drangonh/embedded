/*
预处理器：
#define	定义宏
#include	包含一个源代码文件
#undef	取消已定义的宏
#ifdef	如果宏已经定义，则返回真
#ifndef	如果宏没有定义，则返回真
#if	如果给定条件为真，则编译下面代码
#else	#if 的替代方案
#elif	如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码
#endif	结束一个 #if……#else 条件编译块
#error	当遇到标准错误时，输出错误消息
#pragma	使用标准化方法，向编译器发布特殊的命令到编译器中

例子：
当 MESSAGE 未定义时，才定义 MESSAGE
#ifndef MESSAGE
   #define MESSAGE "You wish!"
#endif

ANSI C 宏：
__DATE__	当前日期
__TIME__	当前时间
__FILE__	这会包含当前文件名
__LINE__	这会包含当前行号
__STDC__	当编译器以 ANSI 标准编译时，则定义为 1

预处理器运算符
宏延续运算符（\）：
一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）

字符串常量化运算符（#）：
当需要把一个宏的参数转换为字符串常量时，则使用字符串常量化运算符（#）

标记粘贴运算符（##）：
宏定义内的标记粘贴运算符（##）会合并两个参数。它允许在宏定义中两个独立的标记被合并为一个标记

参数化的宏：
参数列表是括在圆括号内，且必须紧跟在宏名称的后边。宏名称和左圆括号之间不允许有空格。
例如：#define MAX(x,y) ((x) > (y) ? (x) : (y))
*/

#include <stdio.h>

#define tokenpaster(n) printf ("token" #n " = %d", token##n)
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")

int main(void)
{
    int token34 = 40;
   
    tokenpaster(34);
    message_for(Carole, Debra);
   return 0;
}