#include <stdio.h>

void printArray(int arr[], int size);
void splitArray(int arr[], int size, int dupArr[], int* dupSize, int nonDupArr[], int* nonDupSize);

int main() {
    int arr[] = { 1, 2, 3, 4, 1, 5, 6, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int dupArr[size], nonDupArr[size];
    int dupSize = 0, nonDupSize = 0;

    printf("Original array:\n");
    printArray(arr, size);

    splitArray(arr, size, dupArr, &dupSize, nonDupArr, &nonDupSize);

    printf("\nDuplicate array:\n");
    printArray(dupArr, dupSize);

    printf("\nNon-duplicate array:\n");
    printArray(nonDupArr, nonDupSize);

    return 0;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void splitArray(int arr[], int size, int dupArr[], int* dupSize, int nonDupArr[], int* nonDupSize) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        found = 0;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                dupArr[*dupSize] = arr[i];
                (*dupSize)++;
                found = 1;
                break;
            }
        }

        if (!found) {
            nonDupArr[*nonDupSize] = arr[i];
            (*nonDupSize)++;
        }
    }
}
