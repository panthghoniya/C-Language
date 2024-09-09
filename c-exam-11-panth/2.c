#include<stdio.h>

int main(){

    for (int start = 5; start >= 1; start--)
    {
        for (int col = start; col <= 5; col++)
        {
            printf("%d ",col );
        }
        printf("\n");
    }
    
}