#include <stdio.h>

int addition()
{

    int a, b;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("ans is = %d", a + b);
}
int substration()
{

    int a, b;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("ans is = %d", a - b);
}
int multiplication()
{

    int a, b;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("ans is = %d", a * b);
}
int division()
{

    float a, b;
    printf("enter the value of a = ");
    scanf("%f", &a);
    printf("enter the value of b = ");
    scanf("%f", &b);
    printf("ans is = %f", a / b);
}
int modulus()
{

    int a, b;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("ans is = %d",a%b);
}

int main()
{

    printf("press 1 for addition\n");
    printf("press 2 for substration\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for modulus\n");
    printf("press - for for exit\n");

    printf("======================================\n");
    int user;
    printf("enter the value = ");
    scanf("%d", &user);

    switch (user)
    {
    case 1:
        addition();
        break;
    case 2:
        substration();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        modulus();
        break;
    default:
        printf("you are exit");
        break;
    }
}