#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    printf("Enter 3 digit number: ");
    scanf("%1d%1d%1d",&num1, &num2, &num3);

    printf("Reverse number is: %1d%1d%1d", num3, num2, num1);
}