//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>

int greatest(int arr[], int size) {
   int max = arr[0];
   int i;
   for (i = 1; i < size; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }
   return max;
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
   int max = greatest(arr, size);
   printf("The greatest number is %d", max);
   return 0;
}
