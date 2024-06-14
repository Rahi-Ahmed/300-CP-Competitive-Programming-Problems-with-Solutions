#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];

     for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int frequency[m];

    for(int i = 1; i <= m; i++){
        frequency[i] = 0;
    }
    for(int j = 0; j < n; j++){
        frequency[a[j]]++;
    }

    for(int i = 1; i <= m; i++){
        cout << frequency[i] <<endl;
    }

}
