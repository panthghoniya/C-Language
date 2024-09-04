#include <stdio.h>

int main() {
    int  start = 1,end;

    
    printf("Enter the value of N: ");
    scanf("%d", &end);

    
    do {
        if (start % 2 == 0) {
            printf("%d\n", start);
        }
        start++;
    } while (start <= end);
}
