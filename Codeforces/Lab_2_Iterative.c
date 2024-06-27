#include <stdio.h>

int shift_digits(int n);

int main(void) {
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", shift_digits(n));
    return 0;
}

int shift_digits(int n) {
    int remainder = 0;
    // Base case: if n is 0, return 0
    if(n == 0){
        return 0;
    }else{
        remainder = n % 10;
        n = n / 10;
        if (remainder < 9) {
            remainder++;
        }
    }
    if(shift_digits(n)==0){
        return 1;
    }
    return shift_digits(n) * 10 + remainder;
}
