#include<stdio.h>
int main()
{
    int salary,x;
    printf("enter salary of empolyee");
    scanf("%d",&salary);
    if (salary>=1500)
        printf("gross salary =%d",500+salary+1500-(1500*98)/100);
    else 
        printf("gross salary =%d",1500-(1500*10)/100+salary+1500-(1500*90)/100);
    return 0;
}