#include <stdio.h>

int main()
{

    int sizemax;

    printf("enter the valu => ");
    scanf("%d", &sizemax);

    int box[sizemax];

    for (int i = 0; i < sizemax; i++)
    {
        printf("enter the value => ");
        scanf("%d", &box[i]);
    }
    printf("-----------------------\n");
    
    for (int i = 0; i < sizemax; i++)
    {
        printf("value => %d \n", box[i]);
    }
}