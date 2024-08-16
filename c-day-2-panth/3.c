
// .3 Triangle Angle Finder
// Write a program to find the third angle of a right triangle when two other angles are given.
// Example:
// Input: First angle: 65, Second angle: 45
// Output: Third angle: 70
#include<stdio.h>

int main(){

    int firstangle,secondangle,a = 180,thirdangle;

    printf("enter the firstangle => ");
    scanf("%d",&firstangle);
    printf("enter the secondangle => ");
    scanf("%d",&secondangle);

    thirdangle =   a - firstangle - secondangle ;

    printf(" %d-%d+%d= %d", firstangle,secondangle,a,thirdangle);
}