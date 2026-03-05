#include <stdio.h>

int main(void)
{
    int time1, time2, ntime,timem;
    printf("Enter a 24-hour time (XX:XX): ");
    scanf("%d:%d", &time1,&time2);

    if (1<=time1 && time1<=12)
    {
        printf("Equivalent 12-hour time: %d:%.2d", time1,time2);
    }
    else if (time1 == 0)
    {
        timem = 12;
        printf("Equivalent 12-hour time: %d:%.2d", timem,time2);
    }
    else if ( 12 < time1 && time1<=24) 
    {
        ntime = time1 - 12;
        printf("Equivalent 12-hour time: %d:%.2d", ntime,time2);
    }
    else {
        printf("Please enter correctly");
    }

}