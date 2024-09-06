#include <stdio.h>

int main()
{

    int salary, HRA, DA, TA, grossalary;

    printf("base salsry => ");
    scanf("%d", &salary);
    printf("HRA => ");
    scanf("%d", &HRA);
    printf("DA => ");
    scanf("%d", &DA);
    printf("TA => ");
    scanf("%d", &TA);

    grossalary = salary * HRA % DA % TA;

    printf("gross salary = %d ", grossalary);
}