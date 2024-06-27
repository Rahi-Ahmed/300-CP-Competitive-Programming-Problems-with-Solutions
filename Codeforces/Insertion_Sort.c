#include <stdio.h>
#include <assert.h>

void insertion(int a[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j > 0 && a[j-1] > a[j]; j--){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

int main() {

    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    insertion(a, n);
    return 0;
}