#include <stdio.h>

int main()
{

    int user, box, box1 = 0, box2 = 0;

    printf("enter the value =>");
    scanf("%d", &user);

    while (user != 0)
    {
        box = user % 10;
        if (box % 2 == 0)
        {
            box1++;
        }
        else
        {
            box2++;
        }
        user = user / 10;
    }
    printf("evan num => %d\n", box1);
    printf("odd num => %d", box2);
}