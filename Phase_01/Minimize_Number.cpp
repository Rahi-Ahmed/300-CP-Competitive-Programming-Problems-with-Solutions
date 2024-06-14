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
    int operation = 0;
    while(1){
        bool odd = false;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                a[i] = a[i]/2;
            }else{
                odd = true;
            }
        }

        if(odd){
            break;
        }
        operation++;
    }

    cout << operation;
}
