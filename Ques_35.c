#include<stdio.h>
int main()
{
    int i,j;
    for (i=0;i<5;i++)
    {
        int k=1;
        for (j=0;j<5;j++)
        {
            if (j<=i){
                printf("%d",k);
                k++;}
            else
                printf(" ");
        } printf("\n");
    }
    return 0;
}