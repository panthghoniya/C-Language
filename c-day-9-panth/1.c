#include <stdio.h>

int main()
{

    int ans = 0;
    int end ;

    printf("enter the value => ");
    scanf("%d",&end);

    for (int start = 1; start <= end; start++)
    {
        ans += start;
        printf("%d\n", ans);
    }
    
}