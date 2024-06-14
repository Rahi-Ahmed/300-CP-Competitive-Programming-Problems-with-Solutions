
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int count = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                    if((a[i]+a[j]) % x == 0 && (a[i] - a[j]) % y == 0){
                        count += 1;
                    }
            }
        }
         printf("%d\n", count);
    }
}
