#include<stdio.h>

int main(){
    int a = 5,b = 10;

    printf("a = %d\n",a);
    printf("b = %d\n",b);

    b = b-a;//(b=10) = 5-10=5
    a = a+b;//(a=5) = 5+5=10


    printf("a = %d\n",a);
    printf("b = %d",b);

}