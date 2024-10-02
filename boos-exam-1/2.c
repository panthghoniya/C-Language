#include<stdio.h>

int main(){

    int user;

    printf("enter the value => ");
    scanf("%d",&user);

    if (user % 2 == 0)
    {
        printf("this value is even.");
    }
    else
    {
        printf("this value is odd.");
    }
}