#include <stdio.h>

int main(){

    char a[] = "abcab";
    char b[] = "abba";

    int n = sizeof(a)/sizeof(a[0]);

    int i = 0;
    int j = 0;
    int count = 0;
    while(i < n-1){
        if(a[i] == b[i]){
            count++;
        }
        i++;
        j++;
    }

    printf("%d", count);

    return 0;
}