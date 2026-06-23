// Challenge 2: The Radio Telescope Calibration Grid

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, row1, row2, row3,
    col1, col2, col3, dia1, dia2;

    printf("Enter 9 calibration numbers (space between each integer): ");
    scanf("%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);

    printf("Calibration Grid:\n%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n",a,b,c,d,e,f,g,h,i);

    row1 = a + b + c;
    row2 = d + e + f;
    row3 = g + h + i;

    col1 = a + d + g;
    col2 = b + e + h;
    col3 = c + f + i;

    dia1 = a + e + i;
    dia2 = c + e + g;
    
    printf("Row sums: %d %d %d\n",row1,row2,row3);
    printf("Column sums: %d %d %d\n", col1, col2, col3);
    printf("Diagonal sums: %d %d", dia1, dia2);
}