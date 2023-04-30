#include<stdio.h>
int squre(int );
int main()
{
    int num,i,squ,sum=0;
    printf("enter last number of series");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        squ=squre(i);
        sum=sum+squ;}
    printf("total sum is %d",sum);
    return 0;
}
int squre(int x)
{
    return x*x;
}