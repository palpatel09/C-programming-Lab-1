#include <stdio.h>
int main(){
int a,b;
printf("Enter 2 numbers: \n");
scanf("%d, %d",&a,&b);
if (a>b){
printf("%d is largest and %d is smallest among the two numbers",a,b);
}
else
{
if (a<b){
printf("%d is the largest number and %d is the smallest number among the two numbers",b,a);
}
else{
printf("Both the numbers entered are same.");
}
}
return 0;
}
