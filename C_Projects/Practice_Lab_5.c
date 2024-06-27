#include <stdio.h>

// insert(A, n) inserts the last item in array A into its sorted position
// requires: A is of length n >= 1
//           The first n - 1 items of A are sorted
void insert(int A[], const int n) {
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0){
            if(A[j] < A[j-1]){
                int temp = A[j];
                A[j] = A[j-1];
                A[j-1] = temp;
            }else{
                break;
            }
            j--;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d", A[i]);
        if(i < n-1){
            printf(" ");
        }
    }
    printf("\n");

}

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    insert(A, n);
    return 0;
}