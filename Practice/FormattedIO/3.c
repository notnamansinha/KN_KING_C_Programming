// Challenge 3: Hardware Inventory Invoice

#include <stdio.h>

int main(void)
{
    int ID1, ID2, Q1, Q2, P1, P2, total1, total2;

    printf("Enter first order (ID / Qty @ $Price): ");
    scanf("%d / %d @ $%d", &ID1, &Q1, &P1);
    printf("Enter second order (ID / Qty @ $Price): ");
    scanf("%d / %d @ $%d", &ID2, &Q2, &P2);

    total1= Q1*P1;
    total2= Q2*P2;
    int tot = total1 + total2;

    printf("ID\tQty\tPrice\tTotal\n%d\t%d\t$%d\t%d\n%d\t%d\t$%d\t%d\n", ID1,Q1,P1,total1,ID2,Q2,P2,total2);

    printf("Grand Total: $%d", tot);
}