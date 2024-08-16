#include<stdio.h>

int main(){
    int a = 5,b = 10,d;

    printf("a = %d\n",a);
    printf("b = %d\n",b);

    d = a;//d=5
    a = b;//a=10
    b = d;//b=5


    printf("a = %d\n",a);
    printf("b = %d",b);

}