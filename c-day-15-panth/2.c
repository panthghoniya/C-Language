#include<stdio.h>

int panth(){
    
    int num;
    printf("enter the value => ");
    scanf("%d",&num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("The given number is divisible by both 3 & 5.\n");
    }
    else
    {
        printf("The given number is not divisible by both 3 & 5.\n");
    }
}
int main(){

    int box1;

    printf("enter the loop value => ");
    scanf("%d",&box1);

    for (int i = 0; i < box1; i++)
    {
        panth();
    }
    
}