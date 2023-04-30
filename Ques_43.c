#include<stdio.h>
int main()
{
    int i,j=0,k;
    
    for (k=2;k<1000;k++)
    {
        for (i=2;i<k;i++){
            if (k%i==0)
                j++;}
        if(j==0)
            printf("%d ",k);
        j=0;
    }
}