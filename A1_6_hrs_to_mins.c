#include<stdio.h>
//Question.6 coverting hours into minutes
int main() {
    float hrs;
    printf("enter time in hrs:");
    scanf("%f", &hrs);
    int mins = hrs * 60;
    printf("%.2f hours in minutes is %d", hrs,mins);
    return 0;
}