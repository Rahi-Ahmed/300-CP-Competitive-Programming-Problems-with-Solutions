#include <bits/stdc++.h>
using namespace std;

int main()
{
    //int t; cin >> t;
    //while(t--){
        int arr[1000] = {0};
        arr[0] = 1;
        int carry = 0;
        int len = 1;
        int fact = 1;
        int i, j;
        for(j = 1; j <= fact; j++){
            carry = 0;
            i = 0;
            while(i < len){
                arr[i] = (arr[i]*j)+carry;
                carry = arr[i] / 10;
                arr[i] = arr[i] % 10;
                i++;
            }
            while (carry != 0){
                arr[len] = carry % 10;
                carry = carry / 10;
                len++;
            }
            printf("%d! = ", fact);
            len--;
            while(len >= 0){
                 printf("%d", arr[len]);
                 len--;
            }
        }
      /*long long int factorial = 1;
      int n; cin >> n;
      for(int i = 1; i <= n; i++){
        factorial = factorial * i;
      }
      cout << factorial << endl;
      int cnt = 0;
      while(factorial > 10){
        int last_digit = factorial % 10;
        if(last_digit != 0){
            break;
        }else if(last_digit == 0){
            cnt++;
        }
        factorial = factorial / 10;
      }
      cout << cnt << endl;*/
   //}

   return 0;
}

