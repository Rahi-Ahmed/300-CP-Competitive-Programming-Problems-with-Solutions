#include<iostream>
using namespace std;

int main() {

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int smallest_pair = 1000000;
    for(int i = 0; i < n-1; i++){
        int sum = 0;
        for(int j = i+1; j < n; j++){
            sum = a[i] + a[j] + (j+1) - (j-1);
            if(sum < smallest_pair){
                smallest_pair = sum;
            }
        }
    }
    cout << smallest_pair << endl;
  }

  return 0;
}
