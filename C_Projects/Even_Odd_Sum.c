#include <stdio.h>

void even_odd_sum(int A[], int n, int * even, int * odd){
    *even = 0;
    *odd = 0;
    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){
            *even += A[i];
        }else{
            *odd += A[i];
        }
    }

    printf("Even sum is %d\n", *even);
    printf("Odd sum is %d\n", *odd);
}

int main(void){
    int n, even, odd;
    scanf("%d", &n);

    int A[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    even_odd_sum(A, n, &even, &odd);

}