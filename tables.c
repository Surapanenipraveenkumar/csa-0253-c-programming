// program  to print the tables
#include<stdio.h>
#include<conio.h>
int i,a,b;
int main()
{
	printf("Enter the table number : ");
	scanf("%d",&a);
	printf("Upto which number you want : ");
	scanf("%d",&b); 
	for(i=1;i<=b;i++)
	{
		printf("%d * %d = %d\n",a,i,a*1);
	}
}
