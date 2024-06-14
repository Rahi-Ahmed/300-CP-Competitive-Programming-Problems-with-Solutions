#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n; cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        char ch; cin >> ch;
        int digit = ch - '0';
        sum += digit;
    }
    cout << sum << endl;

    return 0;
}
