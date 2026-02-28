#include <stdio.h>

int main(void)
{
    int first, last, middle;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &first,&middle,&last);

    printf("The reversal is: %d%d%d",last,middle,first);
}