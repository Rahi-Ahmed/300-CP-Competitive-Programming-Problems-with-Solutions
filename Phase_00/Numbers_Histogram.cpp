#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s; cin >> s;
    int t; cin >> t;
    int a[t];
    for(int i = 1; i <= t; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= t; i++){
        for(int j = 1; j <= a[i]; j++){
            cout << s;
        }
        cout << endl;
    }
    return 0;
}
