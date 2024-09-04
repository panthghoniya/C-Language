#include<stdio.h>

int main(){
    
    int start,end;

    printf("enter the value of table => ");
    scanf("%d",&end);

    for ( start = 1; start <= 10; start++)
    {
        printf("%d x %d = %d\n",end,start,end*start);
    }
    
}