# include <stdio.h>

int main(void)
{
    int n, i = 0 ;

    printf("Enter the non negative integer: ");
    scanf("%d", &n);

    while (n < 0)
    {
        printf("Enter the non negative integer: ");
        scanf("%d", &n);
    }

    do
    {
        n /= 10;
        i++;
    }
    while (n > 0);

    if (i>1)
    {
        printf("The number has %d digit(s)",i);
    }
    else
    {
        printf("The number has %d digit",i);
    }
}