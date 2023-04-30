#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total,par;
    printf("enter five subject number");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    par=((total*100)/500);
    if (par>=60)
        printf("first division");
    else if (par>=50 && par<=59)
        printf("second division");
    else if (par>=40 && par<=49)
        printf("third division");
    else 
        printf("fail");
}