#include<stdio.h>
int main(){

    int user, first = 0, second = 1,tird;

    printf("Enter n number : ");
    scanf("%d", &user);

    for (int start = 1; start <= user; start++) {
        printf("%d\t", first);

        tird = first + second;
        first = second;
        second = tird;
    }

    
}