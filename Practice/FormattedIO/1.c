// Challenge 1: The Transit Platform Data Parser

#include <stdio.h>

int main(void)
{
    int Route, BusNumber, HH, MM;

    printf("Enter transit data [Route]-<BusNumber>-(HH:MM): ");
    scanf("[%d]-<%d>-(%d:%d)", &Route, &BusNumber, &HH, &MM);

    printf("Route ID: %d\n", Route);
    printf("Bus Number: %d\n", BusNumber);
    printf("Arrival Time: %d:%d", HH, MM);
    
    return(0);
}