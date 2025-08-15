#include<stdio.h>
//Question.18 area and perimeter of the rectangle
int main() {
    float length,breadth;
    printf("enter the length of rectangle:");
    scanf("%f", &length);

    printf("enter the breadth of rectangle:");
    scanf("%f", &breadth);

    float area = length * breadth;
    float perimeter= 2 * (length + breadth);
    printf("area of rectangle = %.2f square unit \n", area);
    printf("perimeter of rectangle = %.2f square unit", perimeter);
    return 0;
}