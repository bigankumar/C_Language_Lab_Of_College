#include<stdio.h>
int main()
{
	int x,y,i;
	printf("enter x and y");
	scanf("%d %d",&x,&y);
	if (x>y)
		for (i=y;i>=2;i--)
		{
			if (x%i==0 && y%i==0){
				printf("%d",i);
				break;}
		}
	else 
		for (i=x;i>=2;i--)
		{
			if (x%i==0 && y%i==0){
				printf("%d",i);
				break;}
		}
}