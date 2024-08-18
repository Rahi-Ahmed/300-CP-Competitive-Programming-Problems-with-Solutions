#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n+1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        long long int max_product = 0;
        for(int i = 1; i < n; i++){
           max_product = max(max_product, 1LL * a[i] * a[i+1]);
        }
        cout << max_product << endl;
    }
}

