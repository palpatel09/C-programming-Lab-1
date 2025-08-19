#include<stdio.h>
int main() {
int i,n,factorial;
factorial=1;
printf("Enter the value of n:");
scanf("%d", &n);
for (i=1; i<=n;++i){
int num = factorial;
factorial = i*num;
printf("factorial of %d = %d \n", i,factorial);
}
return 0;
}
