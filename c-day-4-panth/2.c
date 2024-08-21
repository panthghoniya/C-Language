#include<stdio.h>

int main(){


int a,b,c,d;

printf("enter the farst value => ");
scanf("%d",&a);
printf("enter the sac. value => ");
scanf("%d",&b);
printf("enter the tharde value => ");
scanf("%d",&c);
printf("enter the forth value => ");
scanf("%d",&d);

if (a != b && a != c && a != d && b != c && b != d && c != d)
{
    if (a > b)
{
    if (a > c)
    {
        if (a > d)
        {
            printf("a is maxi.");
        }
        else
        {
            printf("d is maxi.");
        }
    }
    else
    {
        if (c > d)
        {
            printf("c is maxi.");
        }
        else
        {
            printf("d is maxi.");
        }
    }
}
else
{
    if (b > c)
    {
        if (b > d)
        {
            printf("b is maxi.");
        }
        else
        {
            printf("d is maxi.");
        }
    }
    else
    {
        if (c > d)
        {
            printf("c is maxi.");
        }
        else
        {
            printf("d is maxi.");
        }
    }
}
}
else
{
    printf("erroe");
}




}