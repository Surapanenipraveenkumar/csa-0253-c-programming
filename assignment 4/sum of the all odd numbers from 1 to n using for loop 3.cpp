#include<stdio.h>  
  
int main()  
{  
    int start, end, temp, count, sum = 0;  
  
    printf("Enter start and end value\n");  
    scanf("%d%d", &start, &end);  
  
    if(start > end)  
    {  
        temp  = start;  
        start = end;  
        end   = temp;  
    }  
  
    printf("Odd numbers from %d to %d are\n", start, end);  
    for(count = start; count <= end; count++)  
    {  
        if(count % 2 != 0)  
        {  
            printf("%d\n", count);  
            sum = sum + count;  
        }  
    }  
  
    printf("Sum of all the Odd numbers from %d to %d is %d\n", start, end, sum);  
  
    return 0;  
}  
