// Problem 3: Transformer Core Loss Polynomial (Concepts: evaluating polynomials, Horner's Rule)

#include <stdio.h>

int main(void)

{
    int V, Loss;

    printf("enter an integer: ");
    scanf("%d", &V);

    Loss = 2 * V * V * V * V + 3 * V * V * V - V * V + 5 * V - 8;

    printf("the final calculated integer is: %d", &Loss);
}
