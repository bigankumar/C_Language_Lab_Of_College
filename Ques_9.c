#include<stdio.h>
int main()
{
    float km,meter,feet,inch,cm;
    printf("Enter value of km");
    scanf("%f",&km);
    meter=km*1000;
    cm=meter*100;
    feet=cm*0.0328;
    inch=feet*12;
    printf("km in meter:- %f,\nkm in cm:- %f,\nkm in feet:- %f,\nkm in inches:- %f",meter,cm,feet,inch);
    return 0;
}