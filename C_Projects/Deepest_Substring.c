// C Program Illustrating Naive Approach to
// Find if There is a Pair in A[0..N-1] with Given Sum

// Importing all libraries
#include <stdio.h>
#include <string.h>


int main() {
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    int push = 0, max = 0, max_pos = -1, end_pos = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            push += 1;
            if (max < push) {
                max = push;
                max_pos = i + 1;
            }
        } else if (s[i] == ')') {
            push--;
        }
    }

    if (max_pos == -1) {
        printf("%s\n", s);
    } else {
        for (int i = max_pos;; i++) {
            if (s[i] == ')') {
                break;
            }
            printf("%c", s[i]);
        }
        printf("\n");
    }

    return 0;
}