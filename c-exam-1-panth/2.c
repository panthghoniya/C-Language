#include<stdio.h>

int main(){

    printf("Addition of 12 and 6 is 18\n");
    printf("Subtraction of 12 and 6 is 6\n");
    printf("Multiplication of 12 and 6 is 72\n");
    printf("Division of 12 and 6 is 2\n");
    printf("Modulo of 12 and 6 is 0\n\n\n\n");

    int a = 12 , b = 6 ;

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d x %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d ./. %d = %d\n",a,b,a%b);
}