#include<stdio.h>
//Question.11 convert grams into kg
int main() {
    float gram;
    printf("enter the amount in gram:");
    scanf("%f", &gram);
    float kilogram = gram / 1000;
    printf("%.2f g = %.2f kg", gram,kilogram);
    return 0;
}