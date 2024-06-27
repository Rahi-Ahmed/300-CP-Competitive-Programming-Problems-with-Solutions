#include <stdio.h>
#include <string.h>

// add_char_to_string(s, c, i) adds character c into the string s at position i
// requires: s is a valid string whose length can be increased in length by 1
//           (i.e., there is enough free memory after the end of the string)
//           c is an alphabetic character
//           0 <= i <= length(s)
void add_char_to_string(char s[], char c, int i){
    int len = strlen(s);
    char new[100];

    for(int j = 0; j < i; j++){
        new[j] = s[j];
    }
    new[i] = c;

    for(int k = i+1; k <= len; k++){
        new[k] = s[k-1];
    }

    for(int t = 0; t <=len && new[t] != 0; t++){
        printf("%c", new[t]);
    }
}

int main(void) {
    char s[1000];
    char c;
    int i;
    scanf("%s", s);
    scanf(" %c", &c);
    scanf("%d", &i);
    add_char_to_string(s, c, i);
    //printf("%s\n", s);
}