#include<stdio.h>
//Question.10 convert dollars to pounds
int main() {
    float dollars;
    printf("enter the amount in US dollars:");
    scanf("%f", &dollars);
    float rupees = dollars * 48;
    float pounds = rupees / 70;
    printf("%.2f US dollars in pounds is %.2f", dollars,pounds);
    return 0;
}