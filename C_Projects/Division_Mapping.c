#include <stdio.h>

int div_mapping(int n){

    int rem = 0, i = 0;
    while(n > 0){
        rem = n % 2;
        n = n/2;
        i++;
        printf("%d ", rem);
    }
    return i;
}

int main(){
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Invalid integer\n");
    }else{
        int x = div_mapping(n);
        printf("end %d", x);
    }
}