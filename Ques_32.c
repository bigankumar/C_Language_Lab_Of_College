#include<stdio.h>
int main()
{
    int num,i=0,num1,sum=0;
    printf("enter number");
    scanf("%d",&num);
    num1=num;
    while (num)
    {
        num=num/10;
        i++;
    }
    for (int k=0;k<i;k++)
    {
        sum=sum+num1%10;
        num1=num1/10;
    }
    printf("sum of digit %d",sum);
    return 0;    
}