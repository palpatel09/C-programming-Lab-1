#include<stdio.h>
//Question.7 covert minutes into hours
int main() {
    int mins;
    printf("enter time in mins:");
    scanf("%d", &mins);
    int hrs = mins / 60;
    int remaining_mins = mins % 60;
    printf("%d minutes is equal to %d hours and %d minutes", mins,hrs,remaining_mins);
    return 0;
}