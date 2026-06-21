// Problem 2: Counterweight Fabrication (Concepts: #define, scanf, floats, arithmetic)

#include <stdio.h>
#define PI 3.14159
#define STEEL 450.00
int main()
{
    float R, volume, basecost, tax;

    printf("Enter the radius of the sphere (in meters): ");
    scanf("%f", &R);
    // volume of spehrre = (4/3)*PI*Re3
    volume = (4.0f / 3.0f) * PI * R*R*R;

    basecost = volume * STEEL;

    tax = basecost * 0.05;
    printf("total volume: %.2f\n", volume);
    printf("total basecost: %.2f\n", basecost);
    printf("final taxed cost: %.2f\n", tax+basecost);
}