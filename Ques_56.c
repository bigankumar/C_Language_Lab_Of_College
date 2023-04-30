#include<stdio.h>
int main()
{
    char ch;
    printf("R = STOP! , Y = CAUTION! ,G = GO!");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'R':
    case 'r':
        printf("STOP");
        break;
    case 'Y':
    case 'y':
        printf("CAUTION");
        break;
    case 'G':
    case 'g':
        printf("GO");
        break;
    default:
        break;
    }
}