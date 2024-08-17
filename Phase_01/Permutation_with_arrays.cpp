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

    sort(a + 0, a + n + 0);
    sort(b + 0, b + n + 0);

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
           cout << "no" << endl;
           return 0;
        }
    }

    cout << "yes" << endl;

    return 0;
}
