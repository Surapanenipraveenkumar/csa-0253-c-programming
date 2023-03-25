#include<stdio.h>

void main()
{
		int arr[3][4];
		int i,j,k;
		printf("Enter array element");
		for(i=0;i<3;i++)
		{
			for(j=0; j < 4; j++)
			{
				scanf("%d",arr[i][j]);
			}
		}
	for(i=1; i < 3; i++)
		{
		for(j=0; j < 4; j++)
		{
			printf("%c",arr[i][j]);
			}
		}
		getch();
        return 0;
    }
