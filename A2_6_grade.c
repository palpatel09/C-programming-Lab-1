#include<stdio.h>
//Assignment-2,Question-6 calculate total,averageof marks of three subjects.
int main() {
    float sub1,sub2,sub3;
    printf("Enter the marks of student in subject-1 out of 100:");
    scanf("%f", &sub1);

    printf("Enter the marks of student in subject-2 out of 100:");
    scanf("%f", &sub2);

    printf("Enter the marks of student in subject-3 out of 100:");
    scanf("%f", &sub3);

    float total = sub1 + sub2 + 3;
    float average = total/3;
    printf("Total of three subjects marks = %.2f \n", total);
    printf("Average of three subjects marks = %.2f \n", average);

    if (sub1<35 || sub2<35 || sub3<35) {
        printf("Student has failed because scored below 35 marks in a subject. \n");
    }
    
    else if (average>=70) {
        printf("Grade: Distinction \n");
    }
    else if (average>=60) {
        printf("Grade: first class \n");
    }
    else if (average>=50) {
        printf("Grade: second class \n");
    }
    else if (average>=35) {
        printf("Grade: third class \n");
    }
    else {
        printf("FAIL \n");
    }
    return 0;
}

