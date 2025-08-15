#include<stdio.h>
//Question.15 convert fahrenheit into celcius
int main() {
    float fahrenheit;
    printf("enter the temperature in fahrenheit:");
    scanf("%f", &fahrenheit);
    float celcius = ((float)5/9) * (fahrenheit - 32);
    printf("%.2f degree fahrenheit = %.2f degree celcius", fahrenheit,celcius);
    return 0;
}