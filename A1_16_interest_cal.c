#include<stdio.h>
// Question.16  Calculate Simple Interest 
int main() {
    float principal,rate,time;
    printf("enter the principal amount:");
    scanf("%f",&principal);

    printf("enter the value for rate in percentage:");
    scanf("%f",&rate);

    printf("enter the value for time in years:");
    scanf("%f",&time);

    float interest = (principal * rate * time) / 100;
    printf("we have, principal amount = %.2f, rate = %.2f percent, time = %.1f \n", principal, rate, time);
    printf("simple interest is %.2f", interest);
    return 0;
}
