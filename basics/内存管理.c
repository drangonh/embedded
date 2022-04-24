/*
内存管理:
void *calloc(int num, int size);
在内存中动态地分配 num 个长度为 size 的连续空间,并将每一个字节都初始化为 0

void free(void *address);
该函数释放 address 所指向的内存块,释放的是动态分配的内存空间。
建议您在不需要内存时，都应该调用函数 free() 来释放内存

void *malloc(int num);
在堆区分配一块指定大小的内存空间，用来存放数据。

void *realloc(void *address, int newsize);
该函数重新分配内存，把内存扩展到 newsize。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
   char name[100];
   char *description;
 
   strcpy(name, "Zara Ali");
 
   /* 动态分配内存 */
   description = (char *)malloc( 30 * sizeof(char) );
   if( description == NULL )
   {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else
   {
      strcpy( description, "Zara ali a DPS student.");
   }
   /* 假设您想要存储更大的描述信息 */
   description = (char *) realloc( description, 100 * sizeof(char) );
   if( description == NULL )
   {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else
   {
      strcat( description, "She is in class 10th");
   }
   
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );
 
   /* 使用 free() 函数释放内存 */
   free(description);
}