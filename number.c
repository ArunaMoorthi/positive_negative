#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("\nEnter a number betwee 1 to 9");
scanf("%d",&num);
if (1<=num<=9)
  printf("%d",num);
else
  printf("\nyou entered number is not in range.");
getch();
return 0;
}
