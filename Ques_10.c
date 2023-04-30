#include<stdio.h>
#include<math.h>
int main()
{
    float len,bre,r,rect_ar,cir_ar,rect_peri,cir_cir;
    printf("length,bredth,radius");
    scanf("%f %f %f",&len,&bre,&r);
    rect_ar=len*bre;
    rect_peri=2*(len+bre);
    cir_ar=3.14*pow(r,2);
    cir_cir=2*3.14*r;
    printf("Rectangle- \narea=%f,perimeter=%f\n",rect_ar,rect_peri);
    printf("circle-\narea=%f,circumference=%f",cir_ar,cir_cir);
    return 0;
}