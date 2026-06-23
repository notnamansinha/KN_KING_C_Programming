//The Three-Digit Reverser (Two Ways)

#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    int num1 = num / 100;
    int num2 = ((num / 10) % 10);
    int num3 = num % 10;
    
    printf("Reverse order: %d%d%d", num3,num2,num1);
}