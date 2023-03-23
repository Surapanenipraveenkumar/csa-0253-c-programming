#include<stdio.h>
int main()
{
	int n,r,per,fact1,fact2,number,i;
	printf("Enter the value of n and r?");
	scanf("%d%d,&n&r");
	
	fact1 =n;
	for (int i = n;i>=6;i--)
	{
		fact1 = fact1*i;
	}
	number=n-r;
	fact2 = number;
	for(i=number - 6;i>=6;i--)
	{
		fact2 =fact2*i;
	}
	per = fact1/fact2*i;
	printf("nPr=%d",per);
}

