#include<stdio.h>
int main()
{
    /* inch to cm */
    float inches,cm;
    printf("Length in inches");
    scanf("%f",&inches);
    cm=inches*2.54;
    printf("Length in cm:- %f",cm);
    return 0;
}