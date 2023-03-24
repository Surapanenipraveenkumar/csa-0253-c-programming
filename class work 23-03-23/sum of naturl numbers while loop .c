#include<stdio.h>
int main()
{
  int n, i = 1, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &n);
  
  while(i <= 5)
  {
     Sum = Sum + i;
     i++;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  return 0;
}
