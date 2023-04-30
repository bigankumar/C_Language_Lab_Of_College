#include<stdio.h>
int main()
{
    int num,i,j=0;
    printf("enter number");
    scanf("%d",&num);
    for (i=2;i<num;i++)
        if (num%i==0)
        j++;
    if(j==0)
        printf("%d is prime number",num);
    else printf("%d not a prime number",num);
}