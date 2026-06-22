// Problem 5: IoT Power Drain (Concepts: Sequential updates, float reassignment)

#include <stdio.h>

int main(void)
{
    float battery, drain, cost;
    printf("Enter the starting battery capacity (mAh): ");
    scanf("%f", &battery);

    printf("Enter the standby drain rate (as a percentage): ");
    scanf("%f", &drain);

    drain = drain * (1.f/100.f);

    printf("Enter the transmission cost (a fixed mAh value): ");
    scanf("%f", &cost);
    //wrong logic
    //standbydrainloss = battery - (battery * drain);
    //transmissionloss = battery - (1000* cost);
    //loss = battery - standbydrainloss - transmissionloss;
    battery = battery - (battery * drain) - cost;
    printf("The remaining battery capacity hour 1: %f", battery);

    battery = battery - (battery * drain) - cost;
    printf("The remaining battery capacity hour 2: %f", battery);

    battery = battery - (battery * drain) - cost;
    printf("The remaining battery capacity hour 3: %f", battery);
}