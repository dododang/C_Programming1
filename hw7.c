#include <stdio.h>

void printArrays(int* arr1, int* arr2, int size) {
    printf("arr1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}

void swapArrays(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5, 6 };
    int arr2[] = { 7, 8, 9, 10, 11, 12 };
    int size = 6;

    printArrays(arr1, arr2, size);

    swapArrays(arr1, arr2, size);

    printf("\nAfter swap:\n");
    printArrays(arr1, arr2, size);

    return 0;
}
