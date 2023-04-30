#include<stdio.h>
int main()
{
	int num,poss=0,i,zer=0,n_e=0,num1;
	printf("how many times you want to enter the number");
	scanf("%d",&num1);

	for (i=0;i<num1;i++)
	{
		printf("enter any number");
		scanf("%d",&num);
		if (num>0)
		    poss++;
        else if (num<0)
		    n_e++;
		else
		    zer++;
    }
    printf("possitive = %d \nzero = %d \nnegative = %d",poss,zer,n_e);
	return 0;
}