#include<iostream>
using namespace std;

int main() {
  int n, m;
  while (cin >> n >> m) {
    // The program should be TERMINATED as soon as any of these two numbers
    // is less than or equal to zero and don't print any thing.
    if (n <= 0 or m <= 0) {
      break;
    }
    // make n <= m for easier implementation
    if (n > m) {
      swap(n, m);
    }
    int sum = 0;
    for (int i = n; i <= m; i++) {
      cout << i << ' ';
      sum += i;
    }
    cout << "sum =" << sum << '\n'; // be careful with the spaces
  }
  return 0;
}
