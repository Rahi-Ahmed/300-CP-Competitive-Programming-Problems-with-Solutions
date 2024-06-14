#include <stdio.h>


int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
    char c[5];
    for(int i = 0; i < 5; i++){
        scanf(" %c", &c[i]);
      }

    int count_A = 0;
    int count_B = 0;
    for(int i = 0; i < 5; i++){
    if(c[i] == 'A'){
        count_A += 1;
    }else{
        count_B += 1;
    }
   }

   if(count_A > count_B){
        printf("%c\n", 'A');
       }else{
        printf("%c\n", 'B');
       }
}





}

