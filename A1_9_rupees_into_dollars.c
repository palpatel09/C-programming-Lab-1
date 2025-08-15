#include<stdio.h>
//Question.9 convert rupees into dollars(1$ = 48 Rs.)
int main() {
    float rupees;
    printf("enter the amount in indian rupees:");
    scanf("%f", &rupees);
    float dollars = rupees / 48;
    printf("%.2f rupees in US dollars is $%.2f", rupees,dollars);
    return 0;
}