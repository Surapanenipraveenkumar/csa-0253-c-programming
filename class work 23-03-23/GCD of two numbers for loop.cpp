#include <stdio.h>
   int main(){
                    int num1, num2, nm1, nm2, k, greatcd;
                    printf("Enter two integers: ");
                    scanf("%d %d", &nm1, &nm2);
                    num1= abs[nm1];
                    num2 = abs(nm2);
                    for(k=1; k <= num1 && k <= num2; k++)
                   {
                   if(((num1 % k)==0) && ((num2 % k)==0))
                   greatcd = k;
                   }
   printf("\n The Greatest Common Divisor of %d and %d is %d", nm1, nm2, greatcd);
   return 0;
   }
