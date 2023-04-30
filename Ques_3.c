#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;
    printf("radius=");
    scanf("%f",&radius);
    area=pow(radius,2)*3.14;
    printf("area ia %f",area);
    return 0;
}