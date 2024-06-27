#include <stdio.h>
void print_triangle(int n){
        for(int i = 1; i <= n; i++){
            if(i % 2 == 1){
                for(int j = 1; j <= i; j++){
                    if(j % 2 == 1){
                        printf("\\");
                    }else{
                        printf("/");
                    }
                }
            }else{
                for(int j = 1; j <= i; j++){
                    if(j % 2 == 1){
                        printf("/");
                    }else{
                        printf("\\");
                    }
                }
            }
            printf("\n");
        }
}

int main(void) {
    int n = 0;
    scanf("%d", &n);
    print_triangle(n);
}