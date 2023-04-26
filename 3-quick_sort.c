#include <stdio.h>
#include "sort.h"
/**
  * quick_sort - quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j <= high-1; j++) {
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]);
            printf("Swapped elements: %d, %d\n", array[i], array[j]);
        }
    }

    swap(&array[i+1], &array[high]);
    printf("Swapped elements: %d, %d\n", array[i+1], array[high]);

    printf("Array after partition: ");
    for (int k = low; k <= high; k++) {
        printf("%d ", array[k]);
    }
    printf("\n");

    return i+1;
}

void quick_sort(int *array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quick_sort(array, low, pi-1);
        quick_sort(array, pi+1, high);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
