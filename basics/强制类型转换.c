/*
强制类型转换:
(type_name) expression



整数提升:

*/

#include <stdio.h>
 
int main()
{
   int sum = 17, count = 5;
   double mean;
 
   mean = (double) sum / count;
   printf("Value of sum : %f\n", sum );
 
}