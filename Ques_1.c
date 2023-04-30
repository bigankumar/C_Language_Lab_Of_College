#include<stdio.h>
int main()
{
    float hours,salary,pay;
    printf("enter payrate and hours");
    scanf("%f %f",&pay,&hours);
    salary=pay*hours;
    printf("%f is salary",salary);
    return 0;
}