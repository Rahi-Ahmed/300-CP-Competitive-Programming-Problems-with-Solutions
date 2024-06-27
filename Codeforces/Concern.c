#include <stdio.h>

//void inc(int *p) {
//    *p += 1;
//}
//
//int main(void) {  //Is there Any Specific reason to use void here?? Main works without void.
//    int x = 5;
//    printf("X => %d\n", x);
//    inc(&x);
//    printf("X => %d\n", x);
//}

void inc(int p) {
    p += 1;
}

int main(void) {
    int x = 5;
    printf("X => %d\n", x);
    inc(x);
    printf("X => %d\n", x);
}

