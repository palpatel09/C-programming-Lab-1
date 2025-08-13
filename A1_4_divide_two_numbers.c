#include<stdio.h>
//Question.4 divide two numbers
int main() {
    int n1,n2;
    printf("enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);
    if (n2==0) {
        printf("division by 0 is not possible");
    }
    else {
        float division = n1 / n2;
        printf("division of inputed numbers is: %f", division);
    }
    return 0;

}
