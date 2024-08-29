#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    unsigned int n, k;
    cin >> n >> k;

    n = n | (1u << k);
    cout << n << '\n';
  }
  return 0;
}


