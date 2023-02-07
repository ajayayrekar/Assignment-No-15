//10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>
#define MAX_ELEMENTS 100

void countFrequency(int arr[], int n) {
    int frequency[MAX_ELEMENTS];
    for (int i = 0; i < MAX_ELEMENTS; i++)
        frequency[i] = 0;
    for (int i = 0; i < n; i++)
        ++frequency[arr[i]];
    printf("Element Frequency\n");
    for (int i = 0; i < MAX_ELEMENTS; i++) {
        if (frequency[i] != 0)
            printf("%d\t\t%d\n", i, frequency[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr, n);
    return 0;
}
