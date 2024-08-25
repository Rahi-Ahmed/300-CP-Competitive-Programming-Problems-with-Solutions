#include<iostream>
using namespace std;

int decimal_to_binary(int n){
    int x = n;
    if(x == 1){
        return n;
    }
    if(x == 0){
        return n;
    }
    int one_count = 0;
    while(1){
        int rem = x % 2;
        if(rem == 1){
            one_count++;
        }
        if(x == 0){
            break;
        }
        x = x / 2;
    }
    return one_count + decimal_to_binary(n - 1);
}



int main() {
  int t; cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int ans = decimal_to_binary(n);
    cout << ans << '\n';
  }
  return 0;
}

