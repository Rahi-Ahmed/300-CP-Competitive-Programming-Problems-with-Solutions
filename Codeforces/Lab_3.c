#include <stdio.h>
#include <string.h>

void char_caesar(char *ch, int *n){
    int s = *ch;
    int shift = s + *n;
    int left;
    if(s >= 65 && s <= 90){
        if(shift > 90){
            left = shift - 90;
            printf("%c", 64+left);
        }else{
            printf("%c", shift);
        }
    }else{
        if(shift > 122){
            left = shift - 122;
            printf("%c", 96+left);
        }else{
            printf("%c", shift);
        }
    }
}

int main() {
    char c; int n;
    scanf("%c", &c);
    scanf("%d", &n);

    char_caesar(&c, &n);

}