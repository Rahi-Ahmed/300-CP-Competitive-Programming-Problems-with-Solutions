#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int n; cin >> n;
  int x;
  int mx = 0;
  for (int i = 1; i <= n; i++) {
     cin >> x;
     mx = max(0, x);
  }
  cout << mx << ' ';
  return 0;
}

/*int main()
{
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int mx = a[0];
    for(int i = 0; i < n; i++){
       mx = max(mx, a[i]);

    }

    cout << mx << endl;
}*/
