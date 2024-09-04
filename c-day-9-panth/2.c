#include <stdio.h>

int main()
{

    int ans = 1,end;
    
    printf("enter the value => ");
    scanf("%d",&end);

    
    for (int start = 1; start <= end; start++)
    {
        ans *= start;
    }
    printf("%d\n", ans);
}