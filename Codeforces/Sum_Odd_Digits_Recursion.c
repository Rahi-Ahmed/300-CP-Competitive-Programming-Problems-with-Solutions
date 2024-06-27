#include <stdio.h>

int sum_odd_digits(int n){
    if(n == 0){
        return n;
    }

    int last_digit = n % 10;
    int odd = 0;
    if(last_digit % 2 == 1){
        odd = last_digit;
    }
    return sum_odd_digits(n/10) + odd;
}


int main(){
    int n;
    scanf("%d", &n);
    int sum_odd = sum_odd_digits(n);
    printf("%d", sum_odd);
    return 0;
}