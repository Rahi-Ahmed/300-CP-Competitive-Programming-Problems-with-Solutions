#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Bubble sort algorithm
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("Invalid input\n");
        return 1;
    }

    int arr[n];

    // Seed the random number generator
    srand(time(NULL));

    // Generate random numbers and fill the array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 2001 - 1000; // Range: -1000 to 1000
    }

    // Start timer
    clock_t start = clock();

    // Perform bubble sort
    bubble_sort(arr, n);

    // End timer
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    // Display sorted array and elapsed time
    printf("Sorted array: ");
    if (n <= 1000) {
        printf("[");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("]\n");
    } else {
        printf("Array is too large to display\n");
    }
    printf("Time elapsed: %.6f seconds\n", time_spent);

    return 0;
}
