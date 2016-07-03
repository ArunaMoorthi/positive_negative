#include <stdio.h>
int main()
{
    int n1, n2, mul;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    // maximum number between n1 and n2 is stored in mul
    mul = (n1>n2) ? n1 : n2;
    while(1)//Always true
    {
        if( mul%n1==0 && mul%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,mul);
            break;
        }
        ++mul;
    }
    return 0;
}
