#include<stdio.h>
int facto(int );
int main()
{
    int i,n;
    float sum=0.0,add=0.0;
    printf("enter last number of series");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        add=n/(float)facto(n);
        sum=sum+add;
    }
    printf("all sum is %f",sum);
    return 0;
}
int facto(int n)
{
    int i;
    float fact=1.0;
    for (i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}