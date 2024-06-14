#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
        cin >> a[i];
        }

        int ans = 0;
        for(int l = 0; l < n; l++){
            //int non_decreasing = a[l];
            for(int r = l; r < n; r++){
                    int flag = 1;
                for(int i = l; i < r; i++){
                    if(a[i] > a[i+1]){
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1){
                 ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
