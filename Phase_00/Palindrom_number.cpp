#include<iostream>
using namespace std;


int main() {
  int n; cin >> n;
  int original_number = n;
  int remainder;
  int reversed = 0;
  while(n > 0){
    remainder = n % 10;
    reversed =  reversed * 10 + remainder;
    n = n/10;
  }
  if(original_number == reversed){
    cout << reversed << endl;
    cout << "YES" << endl;
  }else{
    cout << reversed << endl;
    cout << "NO" << endl;
  }


  return 0;
}
