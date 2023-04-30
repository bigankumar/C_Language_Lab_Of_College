#include<stdio.h>
int main ()
{
    int watts;
    printf("Enter watts");
    scanf("%d",&watts);
    switch (watts)
    {
    case 25:
        printf("lifespan 2500");
        break;
    case 40:
    case 60:
        printf("lifespan 1000");
        break;
    case 75:
        printf("lifespan 700");
        break;
    default:
        printf("lifespan 0");
    }
}