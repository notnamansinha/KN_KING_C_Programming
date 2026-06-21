#include <stdio.h>

int main(void)
{
    int Fare, Paid,remain, change50, change20, change10, change5, change1;
    printf("Enter the total fare: ");
    scanf("%d", &Fare);

    printf("Enter the total amount paid: ");
    scanf("%d", &Paid);
    
    remain = Paid - Fare;
    change50 = remain / 50;
    remain = remain % 50;

    change20 = remain / 20;
    remain = remain % 20;

    change10 = remain / 10;
    remain = remain % 10;
    
    change5 = remain / 5;
    remain = remain % 5;

    change1 = remain / 1;
    remain = remain % 1;

    printf("change due is: %d 50\n %d 20\n %d 10\n %d 5\n %d 1\n", change50, change20, change10, change5, change1);
}