#include<stdio.h>

int main(){

    int user;

    printf("marks >= 85 : grade a\n");
    printf("marks >= 70 : grade b\n");
    printf("marks >= 50 : grade c\n");
    printf("marks < 50 : grade d\n");
    printf("enter the marks  => ");
    scanf("%d",&user);

    if (user >= 85)
    {
        printf("GRADE A");
    }
    else if (user >= 70)
    {
        printf("GRADE B");
    }
    else if (user >= 50)
    {
        printf("GRADE C");
    }
    else
    {
        printf("GRADE D");
    }
}