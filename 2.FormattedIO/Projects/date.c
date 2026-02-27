#include <stdio.h>

int main(void)
{
    int month,day,year;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%d%d",year,month,day);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%d\t%d/%d/%d\n", itemno, price, month, day, year);


}
