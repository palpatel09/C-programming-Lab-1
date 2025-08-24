#include<stdio.h>
//Assignment-2, Question-2 Find out largest and smallest of three values
int main() {
    int n1,n2,n3;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    printf("Enter the third number:");
    scanf("%d",&n3);
    if ((n1>n2)&(n1>n3)) {
        if (n2>n3) {
            printf("The largest among the three numbers is %d and smallest is %d",n1,n3);
        }
        else {
            printf("The largest among the three numbers is %d and smallest id %d",n1,n2);
        }
    }
    else if ((n2>n1)&(n2>n3)) {
         if (n1>n3) {
            printf("The largest among the three numbers is %d and smallest is %d",n2,n3);
         }
         else {
            printf("The largest among the three numbers is %d and smallest is %d",n2,n1);
         }
    }
    else if ((n3>n1)&(n3>n2)) {
         if (n1>n2) {
            printf("The largest among the three numbers is %d and smallest is %d",n3,n2);
         }
         else {
            printf("The largest among the three numbers is %d and smallest is %d",n3,n1);
         }
    }
    else {
        printf("All three numbers are same.");
    }
    return 0;
}