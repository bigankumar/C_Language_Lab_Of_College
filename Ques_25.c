#include<stdio.h>
int main()
{
    int x;
    printf("enter year");
    scanf("%d",&x);
    x%4==0 && x%100!=0?printf("leap year"):x%400==0?printf("leap year"):printf("not a leap year");
    return 0;
}