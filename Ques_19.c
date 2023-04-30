#include<stdio.h>
int main()
{
    char gender,quli;
    int years;
    printf("enter gender like m and f,enter years in digits,enter qulification in p and g");
    scanf("%c %d %c",&gender,&years,&quli);
    if (gender=='m')
        if (years>=10)
            if (quli=='p')
                printf("salary=15000");
            else 
                printf("salary=10000");
        else if (quli=='p')
                printf("salary=10000");
            else 
                printf("salary=7000");
    else if (years>=10)
            if (quli=='p')
                printf("salary=12000");
            else 
             printf("salary=9000");
        else if (quli=='p')
                printf("salary=10000");
            else 
                printf("salary=6000");
    return 0;
}