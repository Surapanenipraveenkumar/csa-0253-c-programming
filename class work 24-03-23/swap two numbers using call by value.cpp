#include<stdio.h>
void swap(int num1, int num2){
   int temp = num1;
   num1 = num2;
   num2 = temp;
   printf("After swapping inside function num1= %d, num2=%d\n", num1, num2);
}
int main(){
   int num1 = 10, num2 = 20;   //Assigning initial values
   printf("Before swapping num1= %d, num2=%d\n", num1, num2);
   swap(num1, num2);     //Call the function
   printf("After swapping in main num1= %d, num2=%d\n", num1, num2);
   return 0;
}
