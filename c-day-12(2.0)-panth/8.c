#include <stdio.h>

int main()
{

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        for (int spa = row; spa <= 4; spa++)
        {
            printf("    ");
        }
        for (int col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        for (int spa = 4; spa >= row; spa--)
        {
            printf("    ");
        }
        for (int col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}