#include<stdio.h>
int main()
{
	int fact,facto=1;
	printf("enter number for factorial");
	scanf("%d",&fact);
	for (int i=1;i<=fact;i++)
		facto=facto*i;
	printf("factorial= %d",facto);
	return 0;
}