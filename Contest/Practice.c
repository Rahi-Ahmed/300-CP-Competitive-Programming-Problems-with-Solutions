#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void select(int a[], int len){
    int p = 0;
   for (int i = 0; i < len-1; i++){
        p = i;
   for(int j = i+1; j < len; j++){
    if(a[j] < a[p]){
        p = j;
        int temp = a[p];
        a[p] = a[i];
        a[i] = temp;
    }
   }
   }
   for (int i = 0; i < len; i++){
    printf("%d" , a[i]);
   }

}
int main()
{
    int a[5] ={5, 2, 1, 4, 3};
    select(a, 5);
}
