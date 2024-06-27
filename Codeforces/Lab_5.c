#include <stdio.h>
// select_ptr(A) returns a pointer to the smallest integer in the array A
//               (the first one if the smallest integer appears more than once)
// requires: A only contains positive integers; the end of the array
//           will be determined when the item 0 appears
int * select_ptr(int * A) {
    int *min_ptr = A;

    while(*A != 0){
        if(*A < *min_ptr){
            min_ptr = A;
        }
        A++;
    }
    return min_ptr;
}
void selection_sort(int *A){
    while(*A != 0){
        int *pos = select_ptr(A);
        int temp = *A;
        *A = *pos;
        *pos = temp;
        A++;
    }
}


int main(void) {
    int a[100000];
    int n = 0;
    while (1) {
        scanf("%d", &a[n]);
        if (a[n] == 0) {
            break;
        }
        n++;
    }

    selection_sort(a);

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}
