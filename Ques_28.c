#include<stdio.h>
#include<math.h>
int main()
{
    float z,c;
    int x,y,a,b;
    printf("enter a radius and center");
    scanf("%f %d %d",&z,&x,&y);
    printf("enter checking point");
    scanf("%d %d",&a,&b);
    c=pow(sqrt(b-y)+sqrt(a-x),1/2);
    if (c>z)
        printf("outside of circle");
    else
        printf("inside of circle");
}