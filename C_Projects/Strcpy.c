#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char * my_strcpy(char * dest, const char * src){
    char * d = dest;
    int i = 0;
    while(src[i] != '\0'){
        *d = *src;
        d++;
        src++;
    }
    *d = '\0';

   return dest;
}


int main(){
    char d [10];
    char s [10] = "Rahi";
    my_strcpy(d, s);

    int i = 0;
    while(d[i] != '\0'){
        printf("%c", d[i]);
        i++;
    }
    return 0;
}