#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int k;
        while(n--){
            int a, x;
            cin >> a >> x;
            if(a == 1){
                k >= x;
            }else if(a == 2){
                k <= x;
            }else if(a == 3){
                k != x;
            }else{
                k = 0;
            }
        }
        cout << k << endl;
    }
}
