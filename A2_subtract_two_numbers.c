#include<stdio.h>
//2.subtract two numbers
int main() {
    int n1,n2;
    printf("enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);
    if (n1>=n2) {
        int subtraction = n1-n2;
        printf("subtraction of inputed numbers is: %d", subtraction);
    }
    else {
        int subtraction = n2-n1;
        printf("subtracton of inputed numbers is: %d", subtraction);
    }
    return 0;
}
