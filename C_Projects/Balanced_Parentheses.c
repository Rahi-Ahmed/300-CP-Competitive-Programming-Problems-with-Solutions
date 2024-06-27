#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);

    int count = 0;
    for(int i = 0; i < n; i++){
        if(count < 0){
            break;
        }else{
            if(a[i] == '('){
                count++;
            }else if(a[i] == ')'){
                count--;
            }
        }
    }

    //printf("%d\n", count);
    if(count == 0){
        printf("Balanced\n");
    }else{
        printf("Unbalanced\n");
    }
}