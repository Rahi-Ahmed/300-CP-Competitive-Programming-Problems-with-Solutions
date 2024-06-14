
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
       cin >> a[i];
    }

    int minimum = 1e6;
    for(int i = 0; i < n; i++){
        minimum = min(minimum, a[i]);
    }


  int frequency = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == minimum){
        frequency++;
    }
  }

    if(frequency % 2 == 1){
        cout << "Lucky" <<endl;
    }else{
        cout << "Unlucky" << endl;
    }
}
