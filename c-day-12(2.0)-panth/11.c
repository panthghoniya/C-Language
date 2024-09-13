#include <stdio.h>

int main() {
    for (int row = 1; row <= 5; row++)
    {
        for (int spa = 1; spa <= 5 - row; spa++) 
        {
            printf("  ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("* ", col);
        }
        for (int col = row - 1; col >= 1; col--)
        {
            printf("* ", col);
        }
        printf("\n");
    }
}