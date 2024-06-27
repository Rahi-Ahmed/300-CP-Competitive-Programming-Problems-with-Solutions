#include <stdio.h>

void column_maxs(int A[][5], int n, int maxs[]){
    for(int j = 0; j < 5; j++){
        int temp_max = maxs[0];
        for(int i = 0; i < n; i++){
            if(A[i][j] > temp_max){
                temp_max = A[i][j];
            }
        }
        printf("%d " , temp_max);
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    int max[5];
    int A[n][5];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    column_maxs(A, n, max);
}