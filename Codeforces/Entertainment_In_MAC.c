#include <stdio.h>
#include <string.h>



int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s [1000];
        scanf("%s", s);
        int len = strlen(s);
        char c [1000];
        for(int i = 0; i <len; i++){
            c[i] = s[i];
        }

        for(int i = 1; i <= n; i++){
            for(int j = len-1, k = 0; j >= 0, k < len; j--, k++){
                s[k] = s[j];
            }
        }

        for(int i = 0; i < len; i++){
            if(c[i] != s[i]){
                printf("%c", c[i]);
            }else{
                printf("%c", s[i]);
            }
        }
    }

}