// Write a Program to find if a given number is neutral or not using a ladder if else.
// For example,
// Input:
// Enter any number: -9
// Output:
// This number is Negative
// -----------------------------------------------
// For example,
// Input:
// Enter any number: 0
// Output:
// This number is Neutral
// -----------------------------------------------
// For example,
// Input:
// Enter any number: 7
// Output:
// This number is Positive
#include<stdio.h>

int main(){

    int a;

    printf("enter the value =>  ");
    scanf("%d",&a);


    if (a < 0)
    {
        printf("This number is Negative => %d",a);

    }
    else if (0 == 0)
    {
        printf(" This number is Neutral => %d",a);
    }
    else{
        printf("This number is Positive  => %d",a);
    }
    
}