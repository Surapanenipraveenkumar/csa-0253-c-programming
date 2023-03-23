//Find the index  of first occurrence of X in the array of N elements, if the element not present then print -1
#include<stdio.h>
int main()
{
	int arr[100],b,X,i;
	printf("Enter how many numbers of element you want:");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		printf("Enter %d element:",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter a search index in given array:");
	scanf("%d",&X);
	for(i=0;i<b;i++)
	{
		printf("%d \n",arr[i]);
	}
	int index=-1;
	for (i=0;i<b;i++){
		if(arr[i]==X){
			index=i;
			break;
		}
	}
	if(index==-1){
			printf("%d not found in the array.\n",X);
	}
	else{
		printf("%d found at index %d.\n",X,index);
	} 
	return 0;
}
