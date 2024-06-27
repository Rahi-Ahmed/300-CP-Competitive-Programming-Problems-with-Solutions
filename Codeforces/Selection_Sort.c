#include <stdio.h>
#include <assert.h>

void selection(int a[], int n){
    int pos = 0;
    for(int i = 0; i < n-1; i++){
        pos = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[pos]){
                pos = j;
            }
        }
        int temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
        //printf("%d ", a[i]);
    }

    for(int i =0; i <n; i++){
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

    selection(a, n);
    return 0;
}
