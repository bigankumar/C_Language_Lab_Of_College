#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=0,k,num,sum=0;
    printf("enter number");
    scanf("%d",&num);
        i=num;
        while (i)
        {
            i=i/10;
            j++;
        }
        i=num;
        while (i)
        {
            k=i%10;
            i=i/10;
            sum=sum+pow(k,j);
        }
        if (num==sum)
            printf("%d is armstrong number",num);
        else
            printf("%d is not armstrong number",num);
}