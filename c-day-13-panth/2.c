#include<stdio.h>

int main(){

    int sizemax;
    float sum;

    printf("enter the value => ");
    scanf("%d",&sizemax);

    int box[sizemax];

    for (int i = 0; i < sizemax; i++)
    {
        
        printf("enter the value box[%d] = ",i);
        scanf("%d",&box[i]);
        sum = sum + box[i];
    }
    
    printf("%.2f",sum/sizemax);
    
}