#include <stdio.h>

int main()
{

    for (int row = 1; row <= 2; row++)
    {
        for (int spa = row; spa >= 2; spa--)
        {
            printf("*       *\n");
        }
        for (int col = 1; col <= 5; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
printf("*\n");
printf("*\n");
}