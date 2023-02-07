//7. Write a function in C to count a total number of duplicate elements in an array.
#include <stdio.h>

int countDuplicates(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Number of duplicates: %d\n", countDuplicates(arr, n));
    return 0;
}
