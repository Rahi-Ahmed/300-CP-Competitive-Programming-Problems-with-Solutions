#include <stdio.h>
#include <string.h>

void reverse_string(char * start, char * end){
    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(){
    char str[20] = "Abc";
    int len = strlen(str);
    char start = str[0];
    char end = str[len-1];
    reverse_string(&str[0], &str[len-1]);
    for(int i = 0; i < len; i++){
        printf("%c", str[i]);
    }
    return 0;
}