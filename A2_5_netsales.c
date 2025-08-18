#include<stdio.h>
//Assignment-2, Question-5 Find out net sales 
int main() {
    float gross_sales, discount, net_sales;
    printf("Enter the amount for gross sale:");
    scanf("%f", &gross_sales);

    if (gross_sales>=20000) {
        discount = gross_sales * 0.15; //discount is 15%
        net_sales = gross_sales-discount;
        printf("discount = %.2f Rs \n", discount);
        printf("Net sale = %.2f Rs", net_sales);
    }
    else {
        if (gross_sales>=10000) {
            discount = gross_sales * 0.1; //discount is 10%
            net_sales = gross_sales-discount;
            printf("discount = %.2f Rs \n", discount);
            printf("Net sale = %.2f Rs", net_sales);
        }
        else {
            discount = gross_sales * 0.05; //discount is 5%
            net_sales = gross_sales-discount;
            printf("discount = %.2f Rs \n", discount);
            printf("Net sale = %.2f Rs", net_sales);
        }
    }
    return 0;
}