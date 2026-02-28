#include <stdio.h>

int main(void)
{
    int octal,n1,n2,n3,n4,n5,N1,N2,N3,N4,N5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&octal);

    N1 = octal / 8;
    n1 = octal % 8;

    N2 = N1 / 8;
    n2 = N1 % 8;

    N3 = N2 / 8;
    n3 = N2 % 8;

    N4 = N3 / 8;
    n4 = N3 % 8;

    N5 = N4 / 8;
    n5 = N4 % 8;

    printf("In octal, your number is: %d%d%d%d%d",n5,n4,n3,n2,n1);
}