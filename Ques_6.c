#include<stdio.h>
int main()
{
    int basic_salary;
    float dearness,rent,gross_salary;
    printf("enter basic salary");
    scanf("%d",&basic_salary);
    dearness=(basic_salary*40)/100.0;
    rent=(basic_salary*20)/100.0;
    gross_salary=basic_salary+dearness+rent;
    printf("Gross salary is %f",gross_salary);
    return 0;
}