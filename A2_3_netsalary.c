#include<stdio.h>
//Assignment-2, Question-3 Find out the net salary
int main() {
    float gross_salary, allowances, deductions, net_salary;
    printf("enter the amount of gross salary:");
    scanf("%f", &gross_salary);
    
    if (gross_salary>=10000) {
        allowances = gross_salary * 0.1; //allowances are 10%
        deductions = gross_salary * 0.03; //deductons are 3%
        net_salary = gross_salary + allowances - deductions;
        printf("allowances = %.2f Rs \n", allowances);
        printf("deductions = %.2f Rs \n", deductions);
        printf("Net salary = %.2f Rs", net_salary);
    }
    else {
        if (gross_salary>=5000) {
            allowances = gross_salary * 0.07; //allowances are 7%
            deductions = gross_salary * 0.02; //deductons are 2%
            net_salary = gross_salary + allowances - deductions;
            printf("allowances = %.2f Rs \n", allowances);
            printf("deductions = %.2f Rs \n", deductions);
            printf("Net salary = %.2f Rs", net_salary);
        }
        else {
            printf("Net salary = %.2f Rs", gross_salary);
        }
    }
    return 0;
}