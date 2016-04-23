//Program to count the number in intergers
#include <stdio.h>
int main()
{
  int n,count=0;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while(n!=0)
  {
      n/=10;      
      count+=1;
  }
  printf("Number of digits: %d",count);
return 0;
}
