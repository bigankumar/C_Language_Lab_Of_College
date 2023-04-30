#include<stdio.h>
#include<math.h>
int main()
{
    int menu;
    int i,j=0,k,num,sum=0;
    int fact,facto=1;
    printf("choose options\n");
    printf("1-Find number is Prime or not\n");
    printf("2-Find the number is Armstrong or not\n");
    printf("3-Find the Factorial of number\n");
    printf("4-exit");
    scanf("%d",&menu);

    switch (menu)
    {
    case 1: 
            printf("enter number");
            scanf("%d",&num);
            for (i=2;i<num;i++)
                if (num%i==0)
                j++;
            if(j==0)
                printf("%d is prime number",num);
            else printf("%d not a prime number",num);
        break;

    case 2: 
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
        break;
    case 3:
            printf("enter number for factorial");
            scanf("%d",&fact);
            for (int i=1;i<=fact;i++)
                facto=facto*i;
            printf("factorial= %d",facto);
            return 0;
    default:
        break;
    }
}