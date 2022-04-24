/*
错误处理:
大多数的 C 或 UNIX 函数调用返回 1 或 NULL，同时会设置一个错误代码 errno,该错误代码是全局变量
可以在 errno.h 头文件中编写错误代码。
可以通过检查返回值，然后根据返回值决定采取哪种适当的动作。

C 语言提供了 perror() 和 strerror() 函数来显示与 errno 相关的文本消息

程序退出状态:
通常情况下，程序成功执行完一个操作正常退出的时候会带有值 EXIT_SUCCESS。在这里，EXIT_SUCCESS 是宏，它被定义为 0。
如果程序中存在一种错误情况，当您退出程序时，会带有状态值 EXIT_FAILURE，被定义为 -1。
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
      //应该使用 stderr 文件流来输出所有的错误
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