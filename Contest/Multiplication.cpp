#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int n, int a[]){
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-1-i]){
            return false;
            break;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(is_palindrome(n, a)){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}

