#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int pause = 1;
    for(int i = 1; i <= n; i++){
        for(int j = pause; j <= pause+2; j++){
            cout << j << ' ';
        }
        cout << "PUM" << endl;
        pause = pause + 4;
    }
    return 0;
}
