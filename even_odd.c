//Program to check a number is even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("\n Enter a integer number:");
scanf("%d",&n);
if(n%2==0)
{
printf("\n The number is even");
}
else
{
printf("\n The number is odd");
}
getch();
return 0;
}
