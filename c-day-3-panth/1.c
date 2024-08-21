// Write a Program to find the minimum number from the given 2 numbers using if else.
// For example,
// Input:
// Enter a value of the first number: 8
// Enter a value of the second number: 3
// Output:
// The minimum value is: 3
#include<stdio.h>

int main(){

    int a,b;

    printf("enter the ferst value => ");
    scanf("%d",&a);
    printf("enter the sec. value => ");
    scanf("%d",&b);
    

    if(a < b){
        printf("minimum number => %d",a);

    }
    else{
        printf("minimum number => %d",b);
    }
}