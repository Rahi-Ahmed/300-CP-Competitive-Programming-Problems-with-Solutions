#include <stdio.h>
#include <stdbool.h>

// order(a, b) orders the values pointed to by a and b so that *a <= *b;
//   *diff is set to the absolute value of the difference between *a and *b;
//   returns true if the values were switched and false otherwise
// requires: a, b, and diff point to memory that can be modified
bool order(int * const a, int * const b, int * const diff) {
    char shift = 'N';
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
        *diff = *b - *a;
        shift = 'Y';
    }else{
        *diff = *b - *a;
    }
    return (shift == 'Y');
}

int main(void) {
    int a, b, diff;
    scanf("%d", &a);
    scanf("%d", &b);
    bool ret = order(&a, &b, &diff);
    printf("%d %d %d %d\n", a, b, diff, ret);
    return 0;
}