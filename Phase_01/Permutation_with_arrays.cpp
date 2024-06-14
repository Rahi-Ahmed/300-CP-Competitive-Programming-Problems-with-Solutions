#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int flag = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i] == a[j]){
                flag = 1;
                break;
            }else{
                flag = 0;
            }
        }
    if(flag == 0){
        cout << "no";
        break;
    }
  }

  if(flag == 1){
    cout << "yes";
  }
}
