//9. Write a function in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>

void merge(int arr1[], int arr2[], int n) {
    int i = 0, j = 0, k = 0;
    int temp[n];
    while (i < n && j < n) {
        if (arr1[i] >= arr2[j])
            temp[k++] = arr1[i++];
        else
            temp[k++] = arr2[j++];
    }
    while (i < n)
        temp[k++] = arr1[i++];
    while (j < n)
        temp[k++] = arr2[j++];
    for (i = 0; i < n; i++)
        arr1[i] = temp[i];
}

int main() {
    int arr1[] = {10, 8, 6, 4, 2};
    int arr2[] = {9, 7, 5, 3, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    merge(arr1, arr2, n);
    printf("Merged array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    return 0;
}
