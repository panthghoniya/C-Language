#include<stdio.h>

int main(){

    int sizemax;

    printf("enter the value => ");
    scanf("%d",&sizemax);

    int box[sizemax];

    for (int i = 0; i < sizemax; i++)
    {
        printf("enter the value  => ");
        scanf("%d",&box[i]);
    }
    printf("----------------------------\n");

    for (int i = 0; i < sizemax; i++)
    {
        printf("value box[%d] => %d \n",i,box[i]);
    }

    printf("--------------------------------------------------\n");

    int box2[sizemax];

    
    for (int i = 0; i < sizemax; i++)
    {
        printf("enter the value  => ");
        scanf("%d",&box2[i]);
    }
    printf("----------------------------\n");

    for (int i = 0; i < sizemax; i++)
    {
        printf("value box2[%d] => %d \n",i,box2[i]);
    }
    printf("----------------------------\n");

    int box3[sizemax];

    for (int i = 0; i < sizemax; i++)
    {
        printf("value box3[%d] => %d \n",i,box[i]+box2[i]);
    }
}