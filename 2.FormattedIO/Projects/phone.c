#include <stdio.h>

int main(void)
{
    int threebrac, three, four;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &threebrac, &three, &four);

    printf("You entered %d.%d.%d",threebrac, three, four);
}