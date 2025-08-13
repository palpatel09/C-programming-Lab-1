#include<stdio.h>
//Question.5 add,subtact,multiply and divide two numbers
int main() {
    int n1,n2;
    printf("enter first number(non-negative integer):");
    scanf("%d",&n1);
    printf("enter second number(non-negative integer):");
    scanf("%d",&n2);
    if ((n1<0)||(n2<0)) {
        printf("both the entered numbers should be non-negative integers");
    }
    else {
        int addition = n1 + n2;
        printf("addition of entered numbers is: %d \n", addition);
        if (n1>n2){
            int subtraction = n1 - n2;
            printf("subtraction of entered numbers is: %d \n", subtraction);
        }
        else {
            int subtraction = n2 - n1;
            printf("subtraction of entered numbers is: %d \n", subtraction);
        }
        int multiplication = n1 * n2;
        printf("multiplication of entered numbers is: %d \n", multiplication);
        if (n2==0) {
            printf("division by zero is not possible");
        }
        else {
            float division = (float)n1/n2;
            printf("division of entered numbers is: %f \n", division);
        }
    }
    return 0;
}

