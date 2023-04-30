#include<stdio.h>
#include<math.h>
int main()
{
    float cir,area,radius;
    printf("enter radius of a circle");
    scanf("%f",&radius);
    area=3.14*pow(radius,2);
    cir=2*3.14*radius;
    printf("area is %f and circumference is %f",area,cir);
    return 0;
}