// .2 Gross Salary Calculator
// Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
// the base salary as chosen by the user.

// Copyright © Red & White Education Pvt. Ltd. Page 2

// Example:
// Input: Base Salary: 100, HRA=10%, DA=5%, TA=8%
// Output: Gross Salary: Rs. 123
#include<stdio.h>

int main(){

    float salary,HRA,DA,TA,ans;
    
    printf("enter the value of salary => ");
    scanf("%f",&salary);

    printf("enter the value of HRA => ");
    scanf("%f",&HRA);

    printf("enter the value of DA => ");
    scanf("%f",&DA);

    printf("enter the value of TA => ");
    scanf("%f",&TA);
    
    
    ans = salary + (salary*HRA/100) + (salary*DA/100) + (salary*TA/100);

    printf("%.0f+%.0f+%.0f+%.0f = %f",salary,HRA,DA,TA,ans);
}