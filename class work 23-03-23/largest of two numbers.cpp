#include <stdio.h>
int main()
{
    //1
    int size;
    int i;
    //2
    int largest = -1;
    int secondLargest = -1;
    //3
    printf("How many elements you want to enter : ");
    scanf("%d",&size);
    //4
    int array[size];
    //5
    for(i=0; i < size; i++){
        printf("Enter : ");
        //6
        scanf("%d", &array[i]);
    }
    
    //7
    for(i=0; i<size; i++){
      //8
      if(array[i] > largest){
        secondLargest = largest;
        largest = array[i];
      }else if(array[i] > secondLargest){
        //9
        secondLargest = array[i];
      }
    }
    //10
    printf("First largest number is %d\n",largest);
    printf("Second largest number is %d\n",secondLargest);
}
