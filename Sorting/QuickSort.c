#include <stdio.h>
void print(int arr[], int high){
     printf("Sorted array: ");
  for (int i = 0; i < high ; i++)
    printf(" %d", arr[i]);
  printf("\n");
}
int partition(int arr[], int low, int high) {
  int pivot = arr[low];
  int i = low + 1;
  int j = high;
  while (i <= j) { // Use <= here
    while (arr[i] <= pivot) {
      i++;
    }

    while (arr[j] > pivot) {
      j--;
    }

    if (i < j) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    print(arr,high);
  }

  arr[low] = arr[j]; // Swap pivot with element at partition index
  return j;
}

void quicksort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
  }
}

int main() {
  int arr[] = {3, 1, 4, 2, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  quicksort(arr, 0, n - 1);

  printf("Sorted array: ");
  for (int i = 0; i < n; i++)
    printf(" %d", arr[i]);
  printf("\n");

  return 0;
}