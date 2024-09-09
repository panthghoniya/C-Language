#include<stdio.h>

int main(){

    for (char start = 'A'; start <= 'E'; start++)
    {
        for (char col = start; col >= 'A'; col--)
        {
            printf("%c ",col);
        }
        printf("\n");
    }
    
}