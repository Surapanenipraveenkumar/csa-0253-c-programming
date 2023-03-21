//Program to find Biggest of three numbers
#include<stdio.h>
#include<conio.h>
int num1,num2,num3;
int main()
{
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the Second number:");
	scanf("%d",&num2);
	printf("Enter the third number:");
	scanf("%d",&num3);
	if (num1>num2 && num1>num3)
	{
		printf("%d is the biggest number",num1);
	}
	else if (num2>num3)
	{
		printf("%d is the biggest number",num2);
	}
	else
	{
		printf("%d is the biggest number",num3);
	}
	getch();
		
}
