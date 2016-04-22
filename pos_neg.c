//program to check a number is positive or negative or zero in C
#include<stdio.h>
#include<conio.h>
int main()
{
float n;
printf("\n Enter a number:");
scanf("%f",&n);
if(n>=0)
{
  if(n==0)
  {
  printf("\n The number is zero");
  }
  else
  {
  printf("\n The number is positive");
  }
}
else
{
printf("\n The number is negative");
}
getch;
return 0;
}
