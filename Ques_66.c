/*
Write a function that receives 5 integers and returns the sum, average and
 standard deviation of these numbers. Call this function from main() and
 print the results in main(). [Hint: Function with arguments and with return type]
*/
#include<stdio.h>
#include<math.h>
int sum(int ,int ,int ,int ,int );
float avg(int ,int ,int ,int ,int );
int sd_devi(int ,int ,int ,int ,int );
int main()
{
    int a,b,c,d,e,h;
    float f,g;
    printf("enter five integer");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f=sum(a,b,c,d,e);
    g=avg(a,b,c,d,e);
    h=sd_devi(a,b,c,d,e);
    printf("sum of all degit is %d \n",f);
    printf("avg of all degit is %.2f \n",g);
    printf("standard devition of all degit is %d   ",h);
    return 0;
}
int sum(int a,int b,int c,int d,int e)
{
    int sum;
    sum=a+b+c+d+e;
    return sum;
}
float avg(int a,int b,int c,int d,int e)
{
    float avg;
    avg=sum(a,b,c,d,e)/5.0;
    return avg;
}
int sd_devi(int a,int b,int c,int d,int e)
{
    float s1;
    int s;
    s1=pow(a-avg(a,b,c,d,e),2)+pow(b-avg(a,b,c,d,e),2)+pow(c-avg(a,b,c,d,e),2)+pow(d-avg(a,b,c,d,e),2)+pow(e-avg(a,b,c,d,e),2)/(5-1);
    s=pow(s1,(1/2));
    return s;
}