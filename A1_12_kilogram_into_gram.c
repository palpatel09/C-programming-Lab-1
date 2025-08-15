#include<stdio.h>
//Question.12 convert kilogram into gram
int main() {
    float kilogram;
    printf("enter the amount in kilogram:");
    scanf("%f", &kilogram);
    float gram = kilogram * 1000;
    printf("%.2f kg = %.2f g", kilogram,gram);
    return 0;
}