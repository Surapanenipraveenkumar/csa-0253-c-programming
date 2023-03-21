//Program to find the eligibility to vote
#include<stdio.h>
#include<conio.h>
int age;
main()
{
	printf("Enter the age : ");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("He is eligible to vote");
	}
	else
	{
		printf("He is not eligible to vote");
		printf("\nHe needs %d years for eligible to voting",18-age);
	}
	getch();
}
