// Question 4: Transit Smart Card Check Digit

#include <stdio.h>

int main(void){
    int a,b,c,d,e,f,g,h,i;

    printf(" enter the first 9 digits continuously (without spaces): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i);

    int sum1 = a+c+e+g+i;
    int sum2 = b+d+f+h;

    int total = (sum1*4)+sum2;
    int check = (9-((total-1)%10));

    printf("Check digit: %d", check);
}