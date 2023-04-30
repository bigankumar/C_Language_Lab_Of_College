#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter four digit number");
    scanf("%d",&a);
    b=a%10;
    c=a/1000;
    printf("sum= %d",b+c);
    return 0;
}