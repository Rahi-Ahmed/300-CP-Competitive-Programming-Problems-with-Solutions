#include <stdio.h>

struct entry {
    int firstNumber;
    int secondNumber;
    int gcd;
    int count;
    int predicted;
};

int main(){

    int m, n;
    scanf("%d %d", &m, &n);


    int u1 = 1;
    int v1 = 0;
    int u = 0;
    int v = 1;
    int m1 = m;
    int n1 = n;
    int count = 0;

    while((m1 % n1) != 0){
        int temp1 = u;
        int temp2 = v;
        u = u1 - (m1 / n1) * u;
        v = v1 - (m1 / n1) * v;
        u1 = temp1;
        v1 = temp2;
        int r = m1 % n1;
        m1 = n1;
        n1 = r;
        count++;
    }

    //printf("um + vn   n1   Counter\n");
    printf("%d\n", u*m + v*n);
    printf("%d\n", n1);

}