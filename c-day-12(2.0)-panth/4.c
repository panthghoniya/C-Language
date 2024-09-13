#include<stdio.h>

int main(){

    for (int row = 1; row <= 5; row++)
    {
        for (int spa = row; spa >= 2 ; spa--)
        {
            printf("  ");
        }
        
        for (int col = row; col <= 5; col++)
        {
            if (col%2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    
    
}
