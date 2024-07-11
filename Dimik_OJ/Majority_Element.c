
// given an array, need to find out the most repeated element

#include <stdio.h>

int majority_element(int a[], int n){
    int temp = 0;
    int value;
    for(int i = 0; i < n-1; i++){
        int count = 0;
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                count++;
            }
            if(temp < count){
                temp = count;
                value = a[i];
            }
        }
    }
    return value;
}


int main(void){
    int a[] = {2, 3, 3, 3, 4, 4,4, 4};
    int n = sizeof(a)/sizeof(a[0]);

    int majority = majority_element(a, n);

    printf("%d", majority);
}