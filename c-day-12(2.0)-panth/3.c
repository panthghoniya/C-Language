#include<stdio.h>

int main(){

    for (int row = 5; row >= 1; row--)
    {
        for (int spa = row; spa >= 2; spa--)
        {
            printf("  ");
        }
        
        for (int col = row; col <= 5 ; col++)
        {
            printf("%d ",row);
        }
        printf("\n");   
    }
    
}