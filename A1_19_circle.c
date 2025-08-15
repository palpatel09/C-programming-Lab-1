#include<stdio.h>
//Question.18 calculate area of circle
int main() {
    float radius;
    printf("enter the radius of circle:");
    scanf("%f", &radius);

    float area = (float)22/7 * radius * radius ;
    printf("area of circle of radius %.2f unit is %.2f sq unit \n", radius,area);
    return 0;
}