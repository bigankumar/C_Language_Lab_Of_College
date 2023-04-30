#include<stdio.h>
int main()
{
    float sell,profit,buy;
    printf("enter selling price of 15 item and profit on 15 item");
    scanf("%f %f",&sell,&profit);
    buy=sell-profit;
    printf("one item price is %f",buy/15);
    return 0;
}