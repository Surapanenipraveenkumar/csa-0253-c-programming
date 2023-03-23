//5. Predict the output or error(s) for the following program:
#include<stdio.h>
int main()
{
	float c[]={2.8, 3.4, 4, 6.7, 5};
	float *p=c;
	int i;
	for(i=0;i<5;i++)
	{
		printf("%.1f ", *p);
		p++;
    }
    return 0;
}
