#include <bits/stdc++.h>
using namespace std;

long long int fib(int n){
    if(n == 1){
        return 0;
    }

    if(n == 2){
        return 1;
    }
    long long int a = 0, b = 1, c;
    for(int i = 3; i <= n; i++){
        c = a+b;
        a = b;
        b = c;
    }

    return c;
}

int main()
{
    int n;
    cin >> n;

    long long int f = fib(n);
    cout << f;
}
