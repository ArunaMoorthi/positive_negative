 #include<stdio.h>
 #include<conio.h>
int main(){
long int decimalNumber,remainder,quotient;
int bin[100],i=1,j;
printf("Enter any decimal number: ");
scanf("%ld",&decimalNumber);
quotient = decimalNumber;
while(quotient!=0){
bin[i++]= quotient % 2;
quotient = quotient / 2;
}
printf("Equivalent binary value of decimal number %d: ",decimalNumber);
for(j = i -1 ;j> 0;j--)
printf("%d",bin[j]);
return 0;
getch();
}
