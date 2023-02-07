//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>

int smallest(int arr[], int size) {
   int min = arr[0];
   int i;
   for (i = 1; i < size; i++) {
      if (arr[i] < min) {
         min = arr[i];
      }
   }
   return min;
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
   int min = smallest(arr, size);
   printf("The smallest number is %d", min);
   return 0;
}
