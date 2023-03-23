//7. Print the following hill pattern 
#include<stdio.h>
main()
{
	int a,i,j;
	printf("Enter a number:");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		for(j=1;j<=a-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
	
}
