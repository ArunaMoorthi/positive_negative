//Program to add two numbers using pointers 
#include <stdio.h>
int main()
{
   int num1, num2, *p, *q, sum;
   printf("Enter two integers to add\n");
   scanf("%d%d", &num1, &num2);
   p = &num1;
   q = &num2;
   sum = *p + *q;
   printf("Sum of entered numbers = %d\n",sum);
   return 0;
}
