#include<stdio.h>

int main(){
    
    int user,sum = 0;

    printf("enter the value of => ");
    scanf("%d",&user);

    for (int  i = 1; i <= user; i++)
    {
        printf("%d ",i);

        sum += i;

    }
    printf("\n");

    printf("sum of num  => %d",sum);
    
}