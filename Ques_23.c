#include<stdio.h>
int main ()
{
    int greade,hardness,tensile;
    float carbon;
    printf("Enter hardness,tensile,carbon");
    scanf("%d %f %d",&hardness,&carbon,&tensile);
    if (hardness>50 && carbon<0.7 && tensile>5600)
        printf("greade 10");
    else if (hardness>50 &&  carbon<0.7 )
        printf("greade 9");
    else if (carbon<0.7 && tensile>5600)
        printf("greade 8");
    else if (hardness>50 && tensile>5600)
        printf("greade 7");
    else if (hardness>50 || carbon<0.7 || tensile>5600)
        printf("greade 6");
    else
        printf("greade 5");
    return 0;
}