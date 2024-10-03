#include<stdio.h>

int main(){

    int row;

    printf("enter the value => ");
    scanf("%d",&row);

    for (int  i = 1; i <= row; i++)
    {
        for (int  j = row; j >= i; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}