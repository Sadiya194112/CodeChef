#include<stdio.h>
int main()
{
    char first_name[40];
    float fixed_salary,total_sell,total_salary;

    scanf("%s", first_name);
    scanf("%f%f", &fixed_salary, &total_sell);

    total_salary = fixed_salary+(.15*total_sell);
    printf("TOTAL = R$ %.2f\n", total_salary);
    return 0;

}
