
#include <stdio.h>
#include <stdbool.h>

// order(a, b) orders the values pointed to by a and b so that *a <= *b;
//   *diff is set to the absolute value of the difference between *a and *b;
//   returns true if the values were switched and false otherwise
// requires: a, b, and diff point to memory that can be modified
bool order(int * const a, int * const b, int * const diff) {
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
        diff =  a-b;
        printf("%d %d", a - b);
    }else{
        printf("%d %d", a - b);
    }
}

int main(void) {
    int a, b, diff;
    scanf("%d", &a);
    scanf("%d", &b);
    bool ret = order(&a, &b, &diff);
    printf("%d %d %d %d\n", a, b, diff, ret);
    return 0;
}