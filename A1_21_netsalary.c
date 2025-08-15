#include<stdio.h>
//Question.21 calculate net salary 
int main() {
    float gross_salary;
    printf("enter the amount of gross salary:");
    scanf("%f", &gross_salary);

    float allowance = gross_salary  * 0.1; // 10% allowance
    float deduction = gross_salary * 0.03; // 3% allowance
    float net_salary = gross_salary + allowance - deduction;
    printf("Allowance = %.2f Rs \n", allowance);
    printf("Deduction = %.2f Rs \n", deduction);
    printf("Net Salary = %.2f Rs \n", net_salary);
    return 0;
}