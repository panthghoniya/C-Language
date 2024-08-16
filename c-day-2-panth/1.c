// .1 Temperature Converter
// Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
// formula: °F = (9/5 × °C) + 32
// Example:
// Input: The temperature in Celsius: 38
// Output: The temperature in Fahrenheit: 100.4
#include<stdio.h>

int main(){
    float a = 1.8,c,f,b = 32;
    
    printf("enter the value of a =>");
    scanf("%f",&c);
    
    f = (a*c)+b;
    
    printf("(%.1fx%.0f) + %.0f => %.1f ",a,c,b,f);
}