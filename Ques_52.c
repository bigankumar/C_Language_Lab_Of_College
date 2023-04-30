#include<stdio.h>
int main()
{
    int menu,num1,num2,result;
    float num_1,num_2,result_1;
    
    printf("choose options\n");
    printf("1-  +\n");
    printf("2-  -\n");
    printf("3-  *\n");
    printf("4-  /\n");
    scanf("%d",&menu);
if (menu==1)
{
    printf("Enter two number");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("result is %d",result);
}
if (menu==2)
{
    printf("Enter two number");
    scanf("%d %d",&num1,&num2);
    result=num1-num2;
    printf("result is %d",result);
}
if (menu==3)
{
    printf("Enter two number");
    scanf("%d %d",&num1,&num2);
    result=num1*num2;
    printf("result is %d",result);
}
if (menu==4)
{
    printf("Enter two number");
    scanf("%f %f",&num_1,&num_2);
    result_1=num_1/num_2;
    printf("result is %.2f",result_1);
}
}