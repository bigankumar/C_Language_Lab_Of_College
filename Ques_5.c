#include<stdio.h>
int main()
{
    float si,rate;
    int p,n;
    printf("enter principle,rate of interest and number of years");
    scanf("%d %f %d",&p,&rate,&n);
    si=(p*n*rate)/100.0;
    printf("simple interest is %f",si);
    return 0;
}