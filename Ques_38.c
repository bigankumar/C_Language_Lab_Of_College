#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=1,k,num,sum;
    for (i=1;i<1000;i++)
    {
        num=i;
        while (num)
        {
            num=num/10;
            j++;
        }
        num=i;
        while (num)
        {
            k=num%10;
            num=num/10;
            sum=sum+pow(k,j);
        }
        if (i==sum)
        printf("%d ",i);
        j=0;
        sum=0;
    }
}