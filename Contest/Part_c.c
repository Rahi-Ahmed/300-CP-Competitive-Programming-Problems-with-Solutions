#include <stdio.h>
//define function prototype
void decimal_to_binary(int d){
   long long int bin = 0, place = 1;
   int a[100];
   int i = 0;
   int count = 0;
   while(d > 0){
    int remainder = d % 2;
    a[i] = remainder;
    //printf("%d", a[i]);
    i++;
    d = d/2;
    count++;
   }

   for(int j = count - 1; j >= 0; j--){
    printf("%d", a[j]);
   }



   return bin;
}
int main(){
//Step 1: Get user input
int decimal;
printf("Please Enter any positive decimal number: ");
scanf("%d", &decimal);

//Step 2: Call function and pass input, receive answer from function
//int conversion =
decimal_to_binary(decimal);

//Step 3: Print answer returned from function

//printf("%d", conversion);

return 0;
}

