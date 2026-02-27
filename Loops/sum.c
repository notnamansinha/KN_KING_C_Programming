# include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("This program sums a series of integers\n");
    printf("Enter integers (O to terminate): "); 
    // input 10 9 8, 
    //here 10 will be first n, rest will be buffer
    scanf("%d", &n);

    while (n != 0)
    {
        sum+= n;
        scanf("%d", &n);
    }
    printf("The sum is: %d", sum);
}