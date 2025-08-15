#include<stdio.h>
//Question.8 convert dollars to rupees(1$ = 48Rs.)
int main() {
    float dollars;
    printf("enter the amount in US dollars:");
    scanf("%f", &dollars);
    float rupees = dollars * 48;
    printf("%.2f US dollars in indian rupees is %.2f Rs.", dollars,rupees);
    return 0;
}