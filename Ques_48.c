#include<stdio.h>
int main()
{
	int num;
	printf("enter month number");
	scanf("%d",&num);
	
	switch (num)
	{
	
	case 1:
			printf("jan");
			break;
	case 2:
			printf("fab");
			break;
	case 3: 
			printf("march");
			break;
	case 4:
			printf("april");
			break;
	case 5: 
			printf("may");
			break;
	case 6: 
			printf("june");
			break;
	case 7:
			printf("july");
			break;
    case 8:
			printf("aug");
			break;
	case 9:
			printf("sept");
			break;
	case 10: 
			printf("oct");
			break;
	case 11:
			printf("nom");
			break;
	case 12: 
			printf("dec");
			break;
	}
}