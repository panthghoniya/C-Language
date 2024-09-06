#include <stdio.h>

int main()
{
    char start = 'A', end = 'Z';
    do
    {
        if (start % 4 == 1)
        {
            printf("%c\n", start);
        }
        start++;
    } while (start <= end);
}