#include<stdio.h>
#include<conio.h>
void main()
{
int i, prime,n1,n2, n;
clrscr();
printf("\nEnter the range:");
scanf("%d %d", &n1,&n2);
printf("\nPRIME NUMBERS ARE…: ");
for(n=n1+1; n<n1; n++)
{
prime = 1;
for(i=2; i<n; i++)
if(n%i == 0)
{
prime = 0;
break;
}
if(prime)
printf(“\n%d”, n);
}
getch();
}
