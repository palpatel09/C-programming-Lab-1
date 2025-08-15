#include<stdio.h>
//Question.20 calculate area of triangle
int main() {
    float height, base_length;
    printf("enter the height of triangle:");
    scanf("%f", &height);

    printf("enter the base length of triangle:");
    scanf("%f", &base_length);

    float area = (float)1/2 * height * base_length;
    printf("area of required triangle is = %.2f square unit", area);
    return 0;
}