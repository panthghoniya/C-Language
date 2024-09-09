#include<stdio.h>

int main(){

    for (int start = 1; start <= 5; start++)
    {
        for (int col = 5; col >= start; col--)
        {
            if (col%2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    
}