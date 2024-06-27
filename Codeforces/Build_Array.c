#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int * build_array(int len){
    assert(len > 0);
    int * a = malloc(len * sizeof(int));

    for(int i = 0; i < len; i++){
        a[i] = i;
    }
    return a;
}

void freed(int *a){
    free(a);
}

int main(){

    int len = 5;

    int * a = build_array(len);

    for(int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }
    freed(a);

    return 0;
}