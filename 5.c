/*5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
#include <stdio.h>

int findFirstDuplicate(int arr[], int size) {
    int i;
    for (i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int arr[] = {32, 29, 40, 12, 70, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findFirstDuplicate(arr, size);
    if (result == -1) {
        printf("No adjacent duplicates found");
    } else {
        printf("First adjacent duplicate: %d", result);
    }
    return 0;
}
