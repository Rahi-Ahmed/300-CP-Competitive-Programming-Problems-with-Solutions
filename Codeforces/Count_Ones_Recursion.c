#include <stdio.h>

int count_ones(int n){
    if(n < 10){ //base case
        return (n == 1);
    }

    int recurive_calls = count_ones(n/10);
    return recurive_calls + (n % 10 == 1);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d",count_ones(n));
}