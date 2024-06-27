#include <stdio.h>

// clock_game(n) prints the optimal sequence of guesses that a player can
//   make when n is the price they are trying to guess
// requires: 1 <= n <= 999
void clock_game(const int n){
    int low = 1;
    int high = 999;
    while(low <= high){
        int mid = (low+high)/2;
        if(mid == n){
            printf("%d\n", mid);
            break;
        }else if(n < mid){
            high = mid-1;
        }else if(mid < n){
            low = mid+1;
        }

        printf("%d ", mid);
    }

}

int main(void) {
    int n;
    scanf("%d", &n);
    clock_game(n);
}