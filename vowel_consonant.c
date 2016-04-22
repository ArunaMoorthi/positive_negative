//Program to check vowel or consonant
#include<stdio.h>
#include<conio.h>
int main()
{
char s;
printf("Enter an alphabet: ");
scanf("%c",&s);
if(s=='a'||s=='A'||s=='e'||s=='E'||s=='i'||s=='I'||s=='o'||s=='O'||s=='u'||s=='U')
  printf("%c is a vowel.",s);
else
  printf("%c is a consonant.",s);
getch();
return 0;
}
