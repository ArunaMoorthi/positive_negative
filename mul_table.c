#include<stdio.h>
#include<conio.h>
int main()
{
int num,i;
printf("\nEnter a number:");
scanf("%d",&num);
printf("\n Multiplication of %d table",num);
for(i=0;i<=15;i++)
{
printf("%d * %d = %d", num,i,num*i);
}
getch();
return 0;
}
