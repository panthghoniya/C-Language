#include <stdio.h>

int main()
{

    int size;

    printf("enter the value => ");
    scanf("%d", &size);

    int box[size];

    for (int i = 0; i < size; i++)
    {

        printf("enter the v.[%d] =>", i);
        scanf("%d", &box[i]);
    }
    printf("==========================================\n");
    printf("nag. value => ");

    for (int i = 0; i < size; i++)
    {

        if (box[i] < 0)
        {
            printf("%d, ", box[i]);
        }
    }
}


