#include<stdio.h>

int main(){

    for (int row = 1; row <= 5; row++)
    {
        for (int spa = row; spa >= 2; spa--)
        {
            printf("  ");
        }
        
        for (int col = 5; col >= row; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}