# include <stdio.h> 

int main(void)
{
    int i, n, odd, square;
    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in the table: ");
    scanf("%d", &n);

// odd method 
// square of any integer \(n\) is equal to the sum of the first \(n\) odd integers
    i = 1;
    odd = 3;
    for (square = 1; i<=n; odd+=2)
    {
        printf("%10d%10d\n",i,square);
        ++i;
        square +=odd;
    }


}
