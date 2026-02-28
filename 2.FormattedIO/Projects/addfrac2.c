#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result, resultdenom;

    printf("Enter the fractions (fraction1+fraction2): ");
    scanf("%d/%d+%d/%d", &num1, &denom1,&num2, &denom2);

    result = num1 * denom2 + num2 * denom1;
    resultdenom = denom1 * denom2;

    printf("The sum is %d/%d\n", result, resultdenom);

}