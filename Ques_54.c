//Write a program in C which is a Menu-Driven Program to perform a simple calculation on any two numbers. (Addition, subtraction, multiplication,division) .
#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter the following choise\n");
    printf("1 addition\n");
    printf("2 substration\n");
    printf("3 multipication\n");
    printf("4 devision\n");
    scanf("%d",&num1);

switch (num1)
{
case 1:
    printf("enter two number");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("addition is %d",result);    
    break;
case 2:
    printf("enter two number");
    scanf("%d %d",&num1,&num2);
    result=num1-num2;
    printf("substation is %d",result);    
    break;
case 3:
    printf("enter two number");
    scanf("%d %d",&num1,&num2);
    result=num1*num2;
    printf("multiplication is %d",result);    
    break;
case 4:
    printf("enter two number");
    scanf("%d %d",&num1,&num2);
    result=num1/num2;
    printf("division is %d",result);    
    break;
default:
    break;
}
}