#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//bool is_palindrome(char str[], int n){
//    for(int i = 0; i < n; i++){
//        if(str[i] != str[n-i-1]){
//            return false;
//        }
//    }
//    return true;
//}

bool is_palindrome(char str[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        if(str[start] != str[end]){
            return false;
            break;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    char s [] = "abca";
    int n = strlen(s);
    if(is_palindrome(s, n)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}