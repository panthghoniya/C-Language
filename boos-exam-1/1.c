#include<stdio.h>


int main(){

    int user ,a,b;


    printf("select no. \n");
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");

    printf("enter the value => ");
    scanf("%d",&user);

    if (user > 0 && user <= 4)
    {
        printf("enter the value of 'a' => ");
    scanf("%d",&a);
    printf("enter the value  of 'b'=> ");
    scanf("%d",&b);
    }
    

    switch (user)
    {
    case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
    
    case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d = %d",a,b,a/b);
        break;
    default :
    printf("no no no no no.........");
        break;
    }

}