#include<stdio.h>
//Question.24 swap two numbers
int main() {
    float n1,n2,temp;
    printf("enter the first number:");
    scanf("%f", &n1);
    printf("enter the second number:");
    scanf("%f", &n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("After swapping \n");
    printf("First number = %.2f \n", n1);
    printf("Second number = %.2f \n", n2);
    return 0;
}