#include <stdio.h>

int main(void)
{
    int num, first, last, middle, middle2;

    printf("Enter a three digit number: ");
    scanf("%d", &num);
    last = num % 10;
    middle2 = num / 10;
    middle = middle2 %10;
    first = num / 100;

    printf("The reversal is: %d%d%d",last,middle,first);
}