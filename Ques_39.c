#include<stdio.h>
float fact(int);
int main()
{
    int num,j;
    float sum=0,term;
    printf("enter last number");
    scanf("%d",&num);
    for (j=1;j<=num;j++)
        sum=sum+j/fact(j);
    printf("sum = %.2f",sum);
}
float fact(int j)
{
	int facto=1;
	for (int i=1;i<=j;i++)
		facto=facto*i;
	return facto;
}