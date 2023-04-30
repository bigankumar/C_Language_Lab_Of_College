//Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.
#include<stdio.h>
int main()
{
    int num,rad,length,bredth,hight;
    float area;
    printf("choose the following option\n");
    printf("1 area of circle\n");
    printf("2 area of rectangle\n");
    printf("3 area of traingle\n");
    scanf("%d",&num);
if (num == 1)
{
    printf("enter radious of a circle");
    scanf("%d",&rad);
    area=3.14*rad*rad;
    printf("area of circle is %.2f",area);
}
if (num ==2 )
{
    printf("enter length and bredth of a rectangle");
    scanf("%d %d",&length,&bredth);
    area=length*bredth;
    printf("area of ractangle is %.2f",area);
}
if (num==3)
{
    printf("enter hight and bredth of traingle");
    scanf("%d %d",&hight,&bredth);
    area=0.5*hight*bredth;
    printf("area of traingle is %.2f",area);
}
}