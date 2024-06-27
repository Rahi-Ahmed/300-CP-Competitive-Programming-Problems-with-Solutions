#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 15
#define NUM_SEQUENCES 10

// Function prototypes
struct mcsData mcs(int s[], int lower, int upper);
struct mcsData straddlingLeftRight(int s[], int mid, int lower, int upper);

// A structure data type to return all the data about a maximum contiguous subsequence
struct mcsData {
    int left;
    int right;
    int sum;
};

// Helper function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Helper function to find the maximum of three integers
int max3(int a, int b, int c) {
    return max(a, max(b, c));
}

// Function to find a maximum straddling sequence and return its data: sum and limits
struct mcsData straddlingLeftRight(int s[], int mid, int lower, int upper) {
    int left_sum = -1000000, right_sum = -1000000;
    int sum = 0;
    struct mcsData result;

    for (int i = mid; i >= lower; i--) {
        sum += s[i];
        if (sum > left_sum) {
            left_sum = sum;
            result.left = i;
        }
    }

    sum = 0;
    for (int i = mid + 1; i <= upper; i++) {
        sum += s[i];
        if (sum > right_sum) {
            right_sum = sum;
            result.right = i;
        }
    }

    result.sum = left_sum + right_sum;
    return result;
}

// Function to find the MCS that lies between the limits lower and upper, both inclusive
struct mcsData mcs(int s[], int lower, int upper) {
    struct mcsData result;
    if (lower == upper) {
        result.left = lower;
        result.right = upper;
        result.sum = s[lower];
        return result;
    }

    int mid = (lower + upper) / 2;

    struct mcsData left_result = mcs(s, lower, mid);
    struct mcsData right_result = mcs(s, mid + 1, upper);
    struct mcsData cross_result = straddlingLeftRight(s, mid, lower, upper);

    if (left_result.sum >= right_result.sum && left_result.sum >= cross_result.sum) {
        return left_result;
    } else if (right_result.sum >= left_result.sum && right_result.sum >= cross_result.sum) {
        return right_result;
    } else {
        return cross_result;
    }
}

int main(void) {
    srand(time(NULL));

    for (int i = 0; i < NUM_SEQUENCES; i++) {
        int array[ARRAY_SIZE];

        printf("Sequence %d: ", i + 1);
        for (int j = 0; j < ARRAY_SIZE; j++) {
            array[j] = (rand() % 201) - 100; // Random integers between -100 and 100
            printf("%d ", array[j]);
        }
        printf("\n");

        struct mcsData result = mcs(array, 0, ARRAY_SIZE - 1);

        printf("Maximum Contiguous Subsequence Sum: %d\n", result.sum);
        printf("Subsequence Indices: [%d, %d]\n\n", result.left, result.right);
    }

    return 0;
}
