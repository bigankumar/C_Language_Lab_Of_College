#include<stdio.h>
int main()
{
    int c,d;
    printf("enter two digit"); 
    scanf("%d %d",&c,&d);
    c=c+d; 
    d=c-d;
    c=c-d;
    printf("%d %d",c,d);
    return 0;
}