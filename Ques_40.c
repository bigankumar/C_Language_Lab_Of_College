#include <stdio.h>
int facto(int );
int main() {
    int num;
    printf("enter any number");
    scanf("%d",&num);
    printf("factorial=%d",facto(num));
    return 0;
}
int facto(int num)
{
    int i,fact=1;
    for (i=1;i<=num;i++)
        fact=fact*i;
    return fact;
}