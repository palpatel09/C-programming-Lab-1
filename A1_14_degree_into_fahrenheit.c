#include<stdio.h>
//Question.14 convert celciusino fahrenheit
int main() {
    float celcius;
    printf("enter the temperature in celcius:");
    scanf("%f", &celcius);

    float fahrenheit = ((9/5 * celcius)+32);
    printf("%.2f degree celcius = %.2f degree fahrenheit", celcius, fahrenheit);

    return 0;
} 