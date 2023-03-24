#include <stdio.h>
#define N 7  

int main() {
    // Pointer array
    int arr[N], *ptr;  
    
    // Inputting the array
    printf("Enter the array: ");
    for (int i = 0; i< N; i++){
        scanf("%d", &arr[i]);
    }
    ptr=&arr[N - 1];
    
    // Printing the reverse of the array
    printf("Reversed array: ");
    for(int i = 0; i < N; i++){
        printf("%d ", *ptr--);
    }

    return 0;
}
