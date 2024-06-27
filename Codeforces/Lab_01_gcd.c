#include <stdio.h>

int gcd(int m, int n){
    while((m % n) > 0){
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    return n;
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);

    int result = gcd(m, n);

    printf("%d", result);
}