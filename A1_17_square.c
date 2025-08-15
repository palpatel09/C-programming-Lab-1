#include<stdio.h>
//Question.17 calculate area and perimeter of square
int main() {
    float side;
    printf("enter the side of square:");
    scanf("%f", &side);

    float area = side * side ;
    float perimeter = 4*side;
    printf("area of square = %.2f sq. unit \n", area);
    printf("permeter of square = %.2f unit", perimeter);
    return 0;
}