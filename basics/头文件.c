/*
头文件：
建议把所有的常量、宏、系统全局变量和函数原型写在头文件中

#include <file>：引用系统头文件
#include "file"：引用用户头文件

只引用一次头文件：
如果一个头文件被引用两次，编译器会处理两次头文件的内容，这将产生错误。为了防止这种情况，标准的做法是把文件的整个内容放在条件编译语句中

只引用一次头文件：
#ifndef HEADER_FILE
#define HEADER_FILE

the entire header file file
#endif


有条件引用：
#if SYSTEM_1
   # include "system_1.h"
#elif SYSTEM_2
   # include "system_2.h"
#elif SYSTEM_3
   ...
#endif


*/