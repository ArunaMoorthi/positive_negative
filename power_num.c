//Program to calculate power of a number
#include<stdio.h>
#include<math.h>
int main()
{
float num,exp,power;
printf("\n Enter the number:");
scanf("%f",&num);
printf("\nEnter the exponent(power) for the number:");
scanf("%f",&exp);
power=pow(num,exp);
printf("\n The power of the number is:%f",power);
return 0;
}
