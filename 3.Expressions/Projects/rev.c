#include <stdio.h>
int main(void)
{
    int num, first, last;

    printf("Enter a two digit number: ");
    scanf("%d", &num);
    last = num % 10;
    first = num / 10;

    printf("The reversal is: %d%d",last,first);
}