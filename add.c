#include<stdio.h>
#include<conio.h>
int main()
{
int *ptr1,*ptr2,num;
printf("\n Enter two numbers:");
scanf("%d %d",ptr1,ptr2);
num=*ptr1+*ptr2;
printf("\nSum of two numbers: %d",num);
getch();
return 0;
}
