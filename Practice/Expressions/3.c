#include <stdio.h>

int main(void)
{
    int num,n1,n2,n3,n4,n5,N1,N2,N3,N4,N5;

    printf("Enter a base-10 integer between 0-7775: ");
    scanf("%d",&num);
// divide the number by 6 repeatedly, 
// record the remainders, and read them in reverse order
// till quotient is zero (from bottom to top)

    N1 = num / 6;
    n1 = num % 6;

    N2 = N1 / 6;
    n2 = N1 % 6;

    N3 = N2 / 6;
    n3 = N2 % 6;

    N4 = N3 / 6;
    n4 = N3 % 6;

    N5 = N4 / 6; // quotient
    n5 = N4 % 6; // remainder

    printf("In base 6, your number is: %d%d%d%d%d", n5, n4, n3, n2, n1);
}