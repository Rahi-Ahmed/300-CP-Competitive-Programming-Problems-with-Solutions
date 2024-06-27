#include <stdio.h>

// first_positive(A, n) returns the first positive integer in the array A
//   of length n, or returns 0 if no positive integer is in A
// requires: n >= 1 and A does not contain 0
//           all negative entries in A appear before all positive entries
int first_positive(const int A[], const int n){
    int p = 0;
    for(int i =0; i < n; i++){
        if(A[i] >= 0){
            p = A[i];
            break;
        }
    }

    return p;

}

int main (void){
    int n;
    scanf("%d", &n);
    int A[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    int positive = first_positive(A, n);
    printf("%d\n", positive);
}