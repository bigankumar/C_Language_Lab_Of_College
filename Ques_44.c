#include<stdio.h>
int main()
{
    int num,i,sum=0,ram;
    for (i=1;i<=10;i++)
    {
        printf("enter any number");
        scanf("%d",&num);
        if (num>=0)
            sum=sum+num;
        else{
            printf("sorry you entered negative number\n");
        break;}
    }
    printf("sum of possitive number is %d",sum);
}