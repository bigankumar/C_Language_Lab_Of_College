#include<stdio.h>
int main()
{
    float f,c;
    printf("enter tem... in farenheite");
    scanf("%f",&f);
    c=((f-32)*5)/9.0;
    printf("tem... in centigrade :- %f",c);
    return 0;
}