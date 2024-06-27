#include <stdio.h>
#include <assert.h>

int factorial(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }

    return factorial(n-1)+ factorial(n-2);
}

int main(void){

    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));

}