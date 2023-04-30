#include<stdio.h>
int main()
{
    char hanuman;
    printf("Enter any number or charcter");
    scanf("%c",&hanuman);

    switch (hanuman)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':printf("this is digit");
        break;
    default:
    printf("this is charcter");
        break;
    }
}