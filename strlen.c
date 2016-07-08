#include <stdio.h>
#include<conio.h> 
void main()
{
 char string[50];
 int  i, length = 0;
 
 printf("Enter a string\n");
 gets(string);
 
 for (i=0; string[i] != '\0'; i++) /*keep going through each */
 {                                 /*character of the string */
  length++;                     /*till its end */
 }
  printf("The length of %s =%d\n", string, length);
getch();
}
