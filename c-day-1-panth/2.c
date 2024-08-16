#include<stdio.h>

int main(){
    int a,b,ans;

    printf("enter the val.of a => ");
    scanf("%d",&a);
    printf("enter the val.of b=> ");
    scanf("%d",&b);
    

    ans = (a*a)-(a*b+a*b)+(b*b);

    printf("(%d-%d)2 =%d",a,b,ans);


}