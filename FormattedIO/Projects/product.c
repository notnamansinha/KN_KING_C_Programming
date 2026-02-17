#include <stdio.h>

int main(void)
{
    int itemno, price, month, day, year;
    printf("Enter item number: ");
    scanf("%d", &itemno);

    printf("Enter the price: ");
    scanf("%d", &price);

    printf("Enter the purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\t Unit\t Purchase\n");
    printf(" \t Price\t Date\n");
    printf("%d \t$%d \t%d/%d/%d\n",itemno,price,month,day,year);

}