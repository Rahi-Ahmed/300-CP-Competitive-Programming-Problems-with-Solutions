#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x[20];
    char y[20];

    cin >> x >> y;

    int n = strlen(x);
    int m = strlen(y);

    int len = min(n, m);

    for(int i = 1; i < len; i++){
        if(x[i] < y[i]){
            cout << x << endl;
            return 0;
        }else if(x[i] > y[i]){
            cout << y << endl;
            return 0;
        }
    }

    if(n <= m){
        cout << x << endl;
    }else{
       cout << y << endl;
    }
}
