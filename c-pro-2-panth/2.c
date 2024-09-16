#include<stdio.h>

int main(){

int new1 = 11;
    for (int start = 11; start <= 14; start++)
    {
        for (int col = start ; col >= 11; col--)
        {
            printf("%d ",new1);
            new1++;
        }
        printf("\n");
    }
    
}