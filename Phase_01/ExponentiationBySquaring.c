#include <stdio.h>

// calculating x^n in O(log(n)) time

int square(int n) {
    return n * n;
}

int smart_product(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return x;
    }
    if (n % 2 == 0) {
        return square(smart_product(x, n / 2));
    } else {
        return x * square(smart_product(x, (n - 1) / 2));
    }
}

int main() {
    printf("%d", smart_product(2, 5)); // Output should be 32
    return 0;
}
