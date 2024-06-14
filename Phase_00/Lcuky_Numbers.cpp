#include<bits/stdc++.h>
using namespace std;

bool is_lucky_digit(int digit) {
  // use OR operator here as if digit is 4 OR digit is 7 it returns true
  // if you use AND operator here, it would mean digit would have to be 4 AND 7 at the same time!
  return digit == 4 or digit == 7;
}

bool is_lucky(int n){
   while(n > 0){
    int last_digit = n % 10;
    if(!is_lucky_digit(last_digit)){
        return false;
    }
    n = n/10;
   }
   return true;
}

int main ()
{
    int a , b; cin >> a >> b;
    bool got_lucky = false;
    for(int i = a; i <= b; i++){
        if(is_lucky(i)){
            cout << i << ' ';
            got_lucky = true;
        }
    }
    if(!got_lucky){
        cout<< -1 << endl;
    }
    return 0;
}
