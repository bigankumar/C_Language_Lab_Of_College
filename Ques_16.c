#include<stdio.h>
int main()
{
    int x;
    float y;
    printf("quantity and price par item");
    scanf("%d %f",&x,&y);
    if (x*y>1000)
        printf("total expenses %f =",(x*y)-(x*y*10)/100);
    else
        printf("total expenses %f =",(x*y));
    return 0;
}