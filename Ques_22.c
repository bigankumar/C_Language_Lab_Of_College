#include<stdio.h>
int main()
{
    //* when enter equal value of ram,shayam and ajay then code give error //*
    int ram,shayam,ajay;
    printf("enter age of ram,shayam and ajay");
    scanf("%d %d %d",&ram,&shayam,&ajay);
    if (ram>=shayam)
        {
            if (ram>ajay)
                printf("ram is youngest");
            else
                printf("ajay is youngest");
        }
    else if (ram<=shayam)
        {
            if (shayam>ajay)
                printf("shayam is youngest");
            else 
                printf("ajay is youngest");
        }
    return 0;
}