#include<stdio.h>
int main()
{
    int num,sum,n,i;
    printf("enter five digit number");
    scanf("%d",&num);
    for (i=0;i<=5;i++)
    {   sum=sum+num%10;
        num=num/10;
    }
    printf("sum= %d",sum);
}