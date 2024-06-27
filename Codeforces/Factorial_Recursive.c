#include <stdio.h>
#include <assert.h>

int factorial(int n){
    assert(n >= 0);
    if(n <= 1){
        return 1;
    }

    return n * factorial(n-1);
}

int main(void){

    int n;
    scanf("%d", &n);

    printf("%d", factorial(n));

}