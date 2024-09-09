
#include<stdio.h>

int main(){

    for (int start = 1; start <= 5; start++)
    {
        for (int col = start; col >= 1; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}