//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>

void selectionSort(int arr[], int size) {
   int i, j, minIndex, temp;
   for (i = 0; i < size-1; i++) {
      minIndex = i;
      for (j = i+1; j < size; j++) {
         if (arr[j] < arr[minIndex]) {
            minIndex = j;
         }
      }
      temp = arr[minIndex];
      arr[minIndex] = arr[i];
      arr[i] = temp;
   }
}

int main() {
   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   int arr[size];
   int i;
   printf("Enter the elements of the array: ");
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }
   selectionSort(arr, size);
   printf("The sorted array is: ");
   for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
   return 0;
}
