#include<stdio.h>
int main()
{
    int i,j;
    int k=1;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (j<=i)
                printf("%d",k);
            else
                printf(" ");
        } printf("\n");
          k++;
    }
    return 0;
}