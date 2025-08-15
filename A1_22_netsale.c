#include<stdio.h>
//Question.22 calculate net sales
int main() {
    float gross_sale;
    printf("enter the amount of gross sale in rupees:");
    scanf("%f", &gross_sale);

    float discount = gross_sale * 0.01; //discount = 10% of gross sale
    float net_sale = gross_sale - discount;
    printf("Discount = %.2f Rs \n", discount);
    printf("Net Sale = %.2f Rs", net_sale);
    return 0;
}