#include <stdio.h>
#include <assert.h>

int count_ones(int n){
    assert(n != 0);
    int count = 0;
    while(n > 0){
        int remainder = n % 10;
        if(remainder == 1){
            count += 1;
        }
        n = n/10;
    }
    return count;
}

int main(void){
//    assert(count_ones(0)==0);
//    assert(count_ones(123131)==3);
//    assert(count_ones(999999999)==0);
    int n;
    scanf("%d", &n);
    printf("%d",count_ones(n));
}