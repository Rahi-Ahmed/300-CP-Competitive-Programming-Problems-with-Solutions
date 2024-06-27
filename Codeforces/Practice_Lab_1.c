#include <stdio.h>
#include <math.h>

void print_xbox(int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==0 || i == n-1 || j==0 || j== n-1){
                printf("*");
            }else if(n % 2 == 1 && i == n/2 && j == n/2){
                printf("X");
            }else if(i == j){
                printf("\\");
            }else if(i == n-1-j){
                printf("/");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n = 0;
    scanf("%d", &n);
    print_xbox(n);

    return 0;
}
