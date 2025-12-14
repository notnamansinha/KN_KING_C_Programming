// Write a C program to check whether a number entered by the user is prime or not.
#include <stdio.h>

int main(void)
{
    int num, i, Prime = 1;

    printf("Enter a integer that is positive ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        Prime = 0; 
    } 
    else 
    {
        for (i = 2; i <= num/2; i++)
        {
            if (num % i == 0) 
            {
                Prime = 0; 
                break;
            }
        }
    }

    if (Prime) 
    {
        printf("%d is a prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a prime number.\n", num);
    }
}