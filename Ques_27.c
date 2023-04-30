#include<stdio.h>
int main()
{
	float sell_price,cost_price,profit,loss;
	printf("enter cost price and selling price");
	scanf("%f %f",&cost_price,&sell_price);
	
	if (sell_price>cost_price)
	{
		printf("profit\n");
		profit=sell_price-cost_price;
		printf("profit is %.2f",profit);
	}
	else 
	{
		printf("loss\n");
		loss=cost_price-sell_price;
		printf("loss is %.2f",loss);
	}
}