#include<stdio.h>
int power(int,int);
int main()
{
    int z,x,y;
    printf("Enter base and power");
    scanf("%d %d",&x,&y);
    z=power(x,y);
    printf("%d",z);
    return 0;
}
int power(int a,int b)
{
    int z=1,i;
    for (i=1;i<=b;i++)
        z=z*a;
    return z;
}