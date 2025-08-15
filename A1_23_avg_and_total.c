#include<stdio.h>
//Question.23 calculate averages of three subjects along with their total
int main() {
    float sub1,sub2,sub3;
    printf("enter the marks of subject 1 out of 100:");
    scanf("%f", &sub1);

    printf("enter the marks of subject 2 out of 100:");
    scanf("%f", &sub2);

    printf("enter the marks of subject 1 out of 100:");
    scanf("%f", &sub3);

    float total = sub1 + sub2 + sub3;
    float average = total / 3;
    printf("Total of three subjects = %.2f \n", total);
    printf("Average of three subjects = %.2f", average);
    return 0;
}