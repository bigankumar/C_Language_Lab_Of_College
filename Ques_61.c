#include<stdio.h>
int leap(int);
int main()
{
    int year,y;
    printf("enter year");
    scanf("%d",&year);
    y=leap(year);
    if (y==1)
        printf("%d is leap a year",year);
    else 
        printf("%d is not a leap year");
    return 0;
}
int leap(int x)
{
    if (x%100==0){
        if (x%400==0)
            return 1;
        else 
            return 0;}
    else 
    {
        if (x%4==0)
            return 1;
        else
            return 0;}
}