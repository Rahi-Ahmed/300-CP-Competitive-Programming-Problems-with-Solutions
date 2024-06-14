#include<iostream>
using namespace std;


int main() {
  int n; cin >> n;
  int a;
  int temp;
  for(int i = 1; i <= n; i++){
    cin >> a;
    temp = a;
  }

  int b;
  for(int i = n; i >= 1; i--){
    b = a;
    cout << b;
  }
  cout << endl;
  if(temp == b){
    cout << "YES" <<endl;
  }else{
    cout << "NO" <<endl;
  }

  return 0;
}
