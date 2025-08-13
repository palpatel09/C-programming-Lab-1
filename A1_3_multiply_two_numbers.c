#include<stdio.h>
//Question.3 multiply two numbers
int main() {
    int n1,n2;
    printf("enter first number:");
    scanf("%d", &n1);
    printf("enter second number:");
    scanf("%d", &n2);
    int multiplication = n1 * n2;
    printf("multiplication of inputed numbers is: %d", multiplication);
    return 0;
}