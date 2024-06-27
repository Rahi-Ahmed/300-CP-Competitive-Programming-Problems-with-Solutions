#include <stdio.h>
#include <stdbool.h>

// matrix_mirrored(n, A) returns true exactly when all rows of the n x 5 matrix A are
//   "mirrored", i.e., the exact same when written backwards
// requires: 1 <= n <= 10
bool matrix_mirrored(const int n, const int A[][5]){
    int mirrored = 1;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < 5; ++j) {
            if(A[i][j] != A[i][4-j]){
                mirrored = 0;
                if(j == 2){
                    break;
                }
            }
        }
    }
    return (mirrored == 1);

}

int main(void) {
    int n;
    scanf("%d", &n);
    int two_d_array[n][5];
//    const int num_rows = n;
//    const int num_cols = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &two_d_array[i][j]);
        }
    }
//    for(int i = 0; i < n; i++) {
//        for(int j = 0; j < 5; j++) {
//            printf("%d ", two_d_array[i][j]);
//        }
//        printf("\n");
//    }

    if(matrix_mirrored(n, two_d_array)){
        printf("Y\n");
    } else{
        printf("N\n");
    }
}