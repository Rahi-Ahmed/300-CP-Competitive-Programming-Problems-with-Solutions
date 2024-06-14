#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int min_val = a[0], max_val = a[0];
        int min_pos = 1, max_pos = 1;

        // Find the minimum and maximum values along with their positions
        for (int i = 1; i < n; i++) {
            if (a[i] < min_val) {
                min_val = a[i];
                min_pos = i + 1;
            }
            if (a[i] > max_val) {
                max_val = a[i];
                max_pos = i + 1;
            }
        }

        // Calculate the cost of making all elements equal to the minimum and maximum values
        int cost_min = max_pos - min_pos + 1;
        int cost_max = (min_pos > max_pos) ? n - min_pos + 1 : max_pos;

        // Output the minimum cost
        printf("%d\n", (cost_min < cost_max) ? cost_min : cost_max);
    }

    return 0;
}
