#include<iostream>
using namespace std;

int get_sum_of_digits(int n) {
  int sum = 0;
  // get the digits of n from right to left
  // sum them up
  while (n > 0) {
    int last_digit = n % 10;
    sum += last_digit;
    int number_without_last_digit = n / 10;
    n = number_without_last_digit;
  }
  return sum;
}
int main() {
  int n, a, b; cin >> n >> a >> b;
  int sum_of_numbers = 0;
  for (int i = 1; i <= n; i++) {
    int sum_of_digits = get_sum_of_digits(i);
    if (a <= sum_of_digits and sum_of_digits <= b) {
      sum_of_numbers += i;
    }
  }
  cout << sum_of_numbers << '\n';

  // notice that we don't need to use long long in sum_of_numbers
  // as in the worst case, n = 10000. And we might have to take sum of all these numbers
  // from 1 to 10000. And it is at max 10000 * (10000 + 1) / 2. And this number
  // can be stored in an int variable
  // Rule: Do not use long long when its not necessary
  // this will make you a better coder
  return 0;
}
