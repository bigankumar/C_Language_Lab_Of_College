//Ques 46: Write a C program that reads in an integer n,and prints all its divisors.
#include<stdio.h>
int main()
{
	int num,i;
	printf("enter any number");
	scanf("%d",&num);
	
	for (i=2;i<=num;i++){
		if (num%i==0)
			printf("%d ",i);
	}
}