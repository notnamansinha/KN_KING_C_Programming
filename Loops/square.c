# include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in the table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        printf("%10d%10d\n",i, i*i); // %10d so 10 spaces ahead
        i++;
    }
}