#include <bits/stdc++.h>
using namespace std;

bool is_prime(int a){
    int count = 0;
    for(int i =1; i <= a; i++){
        if(a % i == 0){
            count++;
        }
    }
        if(count == 2){
            return true;
        }else{
            return false;
        }
}

int main()
{
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(is_prime(i)){
            cnt++;
        }
    }
    cout << cnt << endl;
    }


    return 0;
}
