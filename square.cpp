#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int i=0;
	
		printf("Array elemets: \n");
		for (i=0;i<6;i++)
		printf("%d",arr[i]);
	
		printf("\nsquare of array elements:\n");
		for (i=0;i<6;i++)
		printf("%d",arr[i]*arr[i]);
	
		printf("\n");
	
		return 0;
}
