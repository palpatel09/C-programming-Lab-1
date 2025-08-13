#include<stdio.h>
//1.add two numbers
int main() {
    int n1,n2;
    printf("enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);
    int addition = n1 + n2;
    printf("addition of inputed numbers is: %d", addition);
    return 0;
}
