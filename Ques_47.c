#include<stdio.h>
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	
	switch (num)
	{
	
	case 1:
			printf("sun");
			break;
	case 2:
			printf("mon");
			break;
	case 3: 
			printf("tue");
			break;
	case 4:
			printf("wed");
			break;
	case 5: 
			printf("thu");
			break;
	case 6: 
			printf("fri");
			break;
	case 7:
			printf("sat");
			break;
	}
}