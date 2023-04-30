#include<stdio.h>
float new (int ,float );
int main()
{
    int x;
    float y;
    printf("enter two number");
    scanf("%d %f",&x,&y);
    y=new(x,y);
    printf("%.2f",y);
    return 0;
}
float new (int a,float b)
{
    return a*b;
}