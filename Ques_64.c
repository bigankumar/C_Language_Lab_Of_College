// (Two functions - fact(); calculateexp();) Fact function is used within the function calculateexp()

#include<stdio.h>
void fact(int,int);
void calculateexp(int,int);
int main()
{
    int x,y;
    printf("Enter number");
    scanf("%d %d",&x,&y);
    calculateexp(x,y);
}
void calculateexp(int a,int b)
{
    fact(a,b);
}
void fact(int c,int d)
{
    printf("sum is %d",c+d);
}