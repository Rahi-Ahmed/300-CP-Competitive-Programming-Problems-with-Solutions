#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n == 0) {
      cout << 0 << '\n';
      continue;
      // we can't use return 0 here as we are running multiple test cases
      // and return 0 will terminate the whole program which we dont want
    }
    while (n > 0) {
      int last_digit = n % 10;
      cout << last_digit << ' ';

      int number_without_last_digit = n / 10;
      n = number_without_last_digit;
    }
    cout << '\n';
  }
  return 0;
}
