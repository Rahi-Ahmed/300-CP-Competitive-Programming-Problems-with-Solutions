#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int start = 0;   // Start index of the maximum subarray
    int end = -1;    // End index of the maximum subarray
    int max_sum = 0; // Maximum subarray sum
    int sum = 0;     // Current subarray sum
    int i = 0, j = 0;  // Index variables for iteration

    // Kadane's algorithm to find the maximum subarray sum
    while(j < n) {
        sum = sum + a[j];  // Add the current element to the sum

        if(sum > max_sum) {  // Update max_sum if the current sum is greater
            max_sum = sum;
            start = i;
            end = j;
        }

        if(sum < 0) {  // Reset the sum and start a new subarray if the sum is negative
            i = j + 1;
            sum = 0;
        }

        j++;
    }
    printf("\nMaximum Segment: %d\n", max_sum);
    printf("Start Index: %d\n", start);
    printf("End Index: %d\n\n", end);
}