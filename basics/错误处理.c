/*
错误处理:
大多数的 C 或 UNIX 函数调用返回 1 或 NULL，同时会设置一个错误代码 errno,该错误代码是全局变量
可以在 errno.h 头文件中编写错误代码。
可以通过检查返回值，然后根据返回值决定采取哪种适当的动作。

C 语言提供了 perror() 和 strerror() 函数来显示与 errno 相关的文本消息
*/

#include <stdio.h>
#include <errno.h>
#include <string.h>
 
extern int errno ;
 
int main ()
{
   FILE * pf;
   int errnum;
   pf = fopen ("unexist.txt", "rb");
   if (pf == NULL)
   {
      errnum = errno;
      fprintf(stderr, "错误号: %d\n", errno);
      perror("通过 perror 输出错误");
      fprintf(stderr, "打开文件错误: %s\n", strerror( errnum ));
   }
   else
   {
      fclose (pf);
   }
   return 0;
}