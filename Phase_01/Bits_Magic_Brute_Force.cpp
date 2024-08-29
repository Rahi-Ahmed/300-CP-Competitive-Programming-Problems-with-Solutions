#include<iostream>
using namespace std;
#include <cmath>

int decimal_to_binary(int n, int k){

    int temp = n;

    int arr [100000];
    int s = 0;
    while(1){
        int rem = n % 2;
        arr[s] = rem;
        s++;
        if(n == 0){
            break;
        }
        n = n / 2;
    }

    int a = s+1;
    int new_arr[s+1];
    for(int i = 0; i < a; i++){
        new_arr[i] = arr[a-i-1];
    }

    int decimal = 0;
    for(int i = 0; i < a; i++){
        k = a - i - 1;
        if(new_arr[k] == 0){
            new_arr[k] = 1;
            for(int j = a-1; j >= 0; j--){
                if(new_arr[j] == 1){
                    decimal = decimal + pow(2, a-j-1);
                }
            }
            break;
        } else {
           decimal  = temp;
           break;
        }
    }

    return decimal;
}



int main() {
  int t; cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int ans = decimal_to_binary(n, k);
    cout << ans << '\n';
  }
  return 0;
}


