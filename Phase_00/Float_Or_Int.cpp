#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n; cin >> n;
    int a = n;
    if(n - a == 0){
        cout << "int " << a << endl;
    }else{
        cout << "float " << a << " " << n - a << endl;
    }

    return 0;
}
