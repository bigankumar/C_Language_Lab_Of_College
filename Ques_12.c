#include<stdio.h>
int main()
{
    int num,num1,i;
    printf("enter five digit number");
    scanf("%d",&num);
    for (i=0;i<5;i++)
        {
            num1=num%10;
            printf("%d",num1);
            num=num/10;
        }
    return 0;
}