#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    int n = 30, num;
    printf("Enter a number between 0 and 20: ");
    scanf("%d", &num);

    int arr[n];

    // Seed the random number generator
    srand(time(0));

    // Generate random numbers and fill the array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 20+1;
    }

    int frequency = 0;
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        if(arr[i] == num){
            frequency++;
        }
    }
    printf("\n");
    printf("Frequency of %d in the array: %d", num, frequency);

    return 0;
}
