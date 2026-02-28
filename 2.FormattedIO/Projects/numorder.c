#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4, number5, number6,
        number7, number8, number9, number10, number11,
        number12, number13, number14, number15, number16,
        row1, row2, row3, row4, col1, col2, col3, col4, dia1, dia2;

    printf("Enter the number from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &number1,
         &number2, &number3, &number4, &number5, &number6,
          &number7, &number8, &number9, &number10,
           &number11, &number12, &number13, &number14,
            &number15, &number16);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
           number1, number2, number3, number4, number5,
            number6, number7, number8, number9, number10,
             number11, number12, number13, number14,
              number15, number16);

    row1 = number1 + number2 + number3 + number4;
    row2 = number5 + number6 + number7 + number8;
    row3 = number9 + number10 + number11 + number12;
    row4 = number13 + number14 + number15 + number16;

    col1 = number1 + number5 + number9 + number13;
    col2 = number2 + number6 + number10 + number14;
    col3 = number3 + number7 + number11 + number15;
    col4 = number4 + number8 + number12 + number16;

    dia1 = number1 + number6 + number11 + number16;
    dia2 = number4 + number7 + number10 + number13;

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d\n", dia1, dia2);


    return 0;
}