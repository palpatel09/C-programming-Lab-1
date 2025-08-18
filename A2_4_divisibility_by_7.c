#include<stdio.h>
//Assignment-2,Question-4 FInd out if the number is divisile by 7 or not
int main() {
    int num;
    printf("Enter the numner of your choice:");
    scanf("%d", &num);

    if (num/7 == 0) {
        printf("The entered number that is %d is divisible by 7", num);
    }
    else {
        printf("The entered number that is %d is not divisible by 7", num);
    }
return 0;
}