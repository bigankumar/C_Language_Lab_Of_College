#include<stdio.h>
int main ()
{
	int x,y,num=1;
	printf("Enter base and power");
	scanf("%d %d",&x,&y);
	for (int i=1;i<=y;i++)
		num=num*x;
	printf("%d",num);
	return 0;
}