#include <stdio.h>
#include <assert.h>

int f(int a, int b){
    //asserting the requirements
    assert(0 <= b && b <= a);

    //Base cases
    if(a==b || b == 0) {
        return 1;
    }
    //recursive case
    return f(a - 1, b) + f(a - 1, b - 1);
}

int main(){

    assert(f(5, 5)==1);
    assert(f(10, 1)==10);
    assert(f(5, 0)==1);

    int n, m;
    scanf("%d %d", &n, &m);

    int result = f(n, m);
    printf("%d", result);

    return 0;

}