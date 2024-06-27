#include <stdio.h>
#include <assert.h>

int linear_search(int a[], int n, int item){
    int position = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == item){
            position = i;
        }
    }
    return position;
}

int main(){
    int item;
    scanf("%d", &item);

    int a[5] = {1, 2 ,3 , 4, 5};

    int pos = linear_search(a, 5, item);

    printf("%d", pos);
}