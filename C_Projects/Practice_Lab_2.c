#include <stdio.h>
#include <stdbool.h>

// all_digits_even(n) returns true exactly when all decimal digits of n are even
// requires: 0 <= n < 1,000,000,000
bool all_digits_even(int n){
    int rem;
    int count = 0;
    while(n > 0){
       rem = n % 10;
       n = n /10;
       if(rem % 2 == 1){
           count = 1;
       }
    }

    return (count == 0);
}

// double_digits(n) returns the number consisting of the decimal digits of n
//   doubled, so 123 becomes 112233
// requires: 0 <= n < 10,000
int double_digits(int n){
    if(n < 10){
        return n*11;
    }else{
        int rem = n % 10;
            n = n/10;
        return double_digits(n) * 100 + rem * 11;
        }
}

int main(void) {
    int n = 0;
    scanf("%d", &n);
    if(all_digits_even(n)) {
        printf("All digits even.\n");
    } else {
        printf("Not all digits even.\n");
    }
    if(n < 10000) {
        printf("Doubled digits: %d\n", double_digits(n));
    } else {
        printf("Input does not meet requirement of double_digits.\n");
    }
    return 0;
}