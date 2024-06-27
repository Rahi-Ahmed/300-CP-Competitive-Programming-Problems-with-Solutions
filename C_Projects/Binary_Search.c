#include <stdio.h>
#include <assert.h>

int binary_search(int a[], int n, int item){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low+high/2;
        if(a[mid] == item){
            return mid;
            break;
        }else if(item < a[mid]){
            high = mid-1;
        }else if(item > a[mid]){
            low = mid+1;
        }
    }
    return -1;
}

int main() {
    int item;
    scanf("%d", &item);

    int a[5] = {1, 2, 3, 4, 5};

    int pos = binary_search(a, 5, item);
    printf("%d", pos);
}