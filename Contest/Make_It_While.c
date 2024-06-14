#include <stdio.h>

int main(void){
   int t;
   scanf("%d", &t);


   while(t--){
        int n;
   scanf("%d", &n);
   char c[n];
   scanf("%s", &c);
    int paint = 0;
    int position_left_most = 0;
    int position_right_most = 0;
    for(int i = 0; i < n; i++){
        if(c[i] == 'B'){
            position_left_most = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(c[i] == 'B'){
            position_right_most = i;
            break;
        }
    }

    if(position_left_most == 0){
        position_left_most = 1;
        paint = position_left_most + position_right_most;
        printf("%d\n", paint);
    }else{
      paint = (position_right_most - position_left_most) +1;
      printf("%d\n", paint);
    }

   }
}
