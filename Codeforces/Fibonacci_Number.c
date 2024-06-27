#include <stdio.h>
#include <time.h>
#define MAXN 100

int knownF[MAXN];


// Part 1: Recursive Method
int fib_recursion(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib_recursion(n-1) + fib_recursion(n-2);
}

// Part 2: Iterative Method
int fib_iterative(int n){
    int F[MAXN];
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= n; i++){
        F[i] = F[i-1] + F[i-2];
    }
    return F[n];
}

// Part 3: Dynamic Programming with Memoization
int F(int n){

    if(knownF[n] != 0){
        return knownF[n];
    }

    long long int t = n ;

    if (n <= 1) {
        return n;
    }

    t = F(n-1) + F(n-2);
    return knownF[n] = t;
}

int main(){

    clock_t start, end;
    clock_t start_i, end_i;
    clock_t start_a, end_a;
    double time_used_recursion;
    double time_used_iteration;
    double time_used_array;

    int n;
    scanf("%d", &n);

    start = clock();
    int r = fib_recursion(n);
    end = clock();

    start_i = clock();
    int i = fib_iterative(n);
    end_i = clock();

    start_a = clock();
    int a = F(n);
    end_a = clock();

    printf("%d-th Fibonacci Number with Recursion Method: %d\n",n, r);
    printf("%d-th Fibonacci Number with Iteration Method: %d\n",n, i);
    printf("%d-th Fibonacci Number with Dynamic Programming: %d\n",n, a);

    time_used_recursion = ((double) (end - start)) / CLOCKS_PER_SEC;
    time_used_iteration = ((double) (end_i - start_i)) / CLOCKS_PER_SEC;
    time_used_array = ((double) (end_a - start_a)) / CLOCKS_PER_SEC;

    printf("\nThe Recursion function took seconds to execute: %f\n", time_used_recursion);
    printf("The Iterative function took seconds to execute: %f\n", time_used_iteration);
    printf("The Dynamic function took seconds to execute: %f\n", time_used_array);
}