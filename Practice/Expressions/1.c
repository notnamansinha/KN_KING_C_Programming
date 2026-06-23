// The Digit Combiner

#include <stdio.h>

int main(void)
{
    int a, b, digit1, sum2, sum;
    printf("Enter a two digit integer: ");
    scanf("%d", &a);

    digit1 = a % 10; //last digit
    int digit2 = a / 10;//first digit

    sum = digit1 + digit2;
    sum2 = digit1 * digit2;

    printf("sum is: %d\n", sum);
    printf("prod is: %d", sum2);
}