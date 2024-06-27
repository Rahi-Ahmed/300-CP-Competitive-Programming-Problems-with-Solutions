#include <stdio.h>

// negate_col(n, A, c) negates the entries in column c of the n x 5 matrix A
// requires: n >= 1, 0 <= c < 5
void negate_col(const int n, int A[][5], const int c){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            if(j == c){
                A[i][j] = 0;
            }
        }
    }
}

// matrix_max(n, A, r) returns the largest element of row r of the n x 5 matrix A
// requires: n >= 1, 0 <= r < n
int matrix_max(const int n, int A[][5], const int r){
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++) {
           if(i == r && A[i][j] > max){
               max = A[i][j];
           }
        }
    }
    return max;
}

int main(void) {
    int A[10][5];
    const int n = 10;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    int r, c;
    scanf("%d", &c);
    negate_col(n, A, c);
    scanf("%d", &r);
    printf("%d\n", matrix_max(n, A, r));
}