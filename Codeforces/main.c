#include <stdio.h>
#include <limits.h>
#include <math.h>

struct mcsData{
    int left;
    int right;
    int sum;
};

int main() {

    struct mcsData  mcs1 = {10, 20, 50};

    mcs1.left = 10;



    printf("%d", mcs1.left);

    return 0;
}
