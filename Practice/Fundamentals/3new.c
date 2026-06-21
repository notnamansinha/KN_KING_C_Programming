// Problem 3: Transformer Core Loss Polynomial (Concepts: evaluating polynomials, Horner's Rule)

#include <stdio.h>

int main(void)
{
    int v, Loss;
    printf("enter integer value for v: ");
    scanf("%d", &v);

    // Horner's Rule: an algorithm that optimizes
    // polynomial evaluation by rewriting the 
    // polynomial in a nested form

    Loss = (((2*v + 3) * (v - 1)) * (v + 5)) * v;

    printf("the final calculated integer is: %d", &Loss);
}