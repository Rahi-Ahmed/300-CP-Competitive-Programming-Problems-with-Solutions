#include <stdio.h>

int left_to_right(int n){
    if(n >= 10){
        return left_to_right(n / 10);
    }
    return n % 10;
}

int main(){
    int n;
    scanf("%d", &n);

    while(n > 0){
        if(n >= 10){
            printf("%d\n", left_to_right(n));
        }
        n = n / 10;
    }
}