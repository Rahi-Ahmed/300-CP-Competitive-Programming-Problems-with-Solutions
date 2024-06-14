#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n = 2;
    int a[n], b[n];



    for(int i = 0; i <= n; i++){
        cin >> a[i];
    }

    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];

     sort(b, b+n+1);
    for(int i = 0; i <= n; i++){
        cout << b[i] << endl;
    }

    cout << endl;

    for(int i = 0; i <= n; i++){
        cout << a[i] << endl;
    }

   return 0;
}

