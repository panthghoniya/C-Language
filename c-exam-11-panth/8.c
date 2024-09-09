#include<stdio.h>

int main(){

int new1 = 1;
    for (int start = 1; start <= 5; start++)
    {
        for (int col = start ; col >= 1; col--)
        {
            printf("%d ",new1);
            new1++;
        }
        printf("\n");
    }
    
}