#include <stdio.h>
#include <stdbool.h>

// num_factors_of_n(n,k) returns how many integers in {1,2,3,...,k}
//   are factors of n
// requires: 1 <= k, 1 <= n
int num_factors_of_n(int n, int k){
    int count = 0;
    for(int i = k; i >= 0; i--){
        if(n % i == 0){
            count++;
        }
    }
    return count;
}

bool is_prime(int n){
    return (num_factors_of_n(n, n) == 2);
}

int main(){
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int x = num_factors_of_n(n, k);
    printf("%d\n", x);

    if(is_prime(n) == 1){
        printf("prime");
    } else{
        printf("not prime");
    }

}

//#include <stdio.h>
//#include <stdbool.h>
//
//// num_factors_of_n(n, k) returns how many integers in {1, 2, 3, ..., k}
//// are factors of n
//// requires: 1 <= k, 1 <= n
//int num_factors_of_n(int n, int k) {
//    //base case
//    if (k == 0) {
//        return 0;
//    } else {
//        return (n % k == 0) + num_factors_of_n(n, k - 1); //recursive case
//    }
//}
//
//// is_prime(n) returns true if n is a prime number and false otherwise
//// requires: 1 <= n
//bool is_prime(int n) {
//    return num_factors_of_n(n, n) == 2;
//}
//
//int main() {
//    int n, k;
//
//
//    scanf("%d %d", &n, &k);
//
//    // Calculate the result of num_factors_of_n and check if n is prime
//    int result = num_factors_of_n(n, k);
//    bool prime = is_prime(n);
//
//    // Print the result and whether n is prime or not
//    printf("%d\n", result);
//    if(is_prime(n) == 1){
//        printf("prime");
//    } else{
//        printf("not prime");
//    }
//
//    return 0;
//}
