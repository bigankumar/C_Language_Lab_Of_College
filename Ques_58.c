#include<Stdio.h>
#include<math.h>
int main()
{
    float angle,y,i;
    angle=0;
    y=angle*3.14/180;
    printf("\n\n");
    printf("six(%.1f) is %.2f\n",angle,sin(y));
    printf("cos(%.1f) is %.2f\n",angle,cos(y));
    printf("tan(%.1f) is %.2f\n",angle,tan(y));
    printf("\n\n");

    angle=30;
    y=angle*3.14/180;
    printf("six(%.1f) is %.2f\n",angle,sin(y));
    printf("cos(%.1f) is %.2f\n",angle,cos(y));
    printf("tan(%.1f) is %.2f\n",angle,tan(y));
    printf("\n\n");

    angle=45;
    y=angle*3.14/180;
    printf("six(%.1f) is %.2f\n",angle,sin(y));
    printf("cos(%.1f) is %.2f\n",angle,cos(y));
    printf("tan(%.1f) is %.2f\n",angle,tan(y));
    printf("\n\n");

    angle=90;
    y=angle*3.14/180;
    printf("six(%.1f) is %.2f\n",angle,sin(y));
    printf("cos(%.1f) is %.2f\n",angle,cos(y));
    printf("tan(%.1f) is %.2f\n",angle,tan(y));
    printf("\n\n");
    return 0;
}