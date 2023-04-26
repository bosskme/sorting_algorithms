#include "sort.h"
/**
  * selection_sort - selection sort algorithm
  * @array: array to sort
  * @size: size of array
  */
void selection_sort(int *array, size_t size)
{
  int i, j, min_index, temp;

  for (i = 0; i < size-1; i++) {
    min_index = 1;

    for (j = i+1; j < size; j++) {
      if (array[j] < array[min_index]) {
	min_index = j;
      }
    }

    if (min_index != i) {
      temp = array[i];
      array[i] = array[min_index];
      array[min_index] = temp;

      printf("Swapped elements: %d, %d\n", array[i], array[min_index]);
    }

    printf("Array after iteration %d: ", i+1);
    for (int k = 0; k < size; K++) {
      printf("%d ", array[k]);
    }

    printf("\n");
  }
}

int main()
{
  int arr[] = {64, 25, 12, 22, 11};
  size_t size = sizeof(arr) / sizeof(arr[0]);
  selection_sort(arr, size);
  return 0;
}
