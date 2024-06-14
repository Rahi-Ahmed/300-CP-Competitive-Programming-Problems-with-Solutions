#include<iostream>
using namespace std;

bool is_prime(int a){
   int cnt = 0;
   for(int i = 1; i <= a; i++){
    if(a % i == 0){
        cnt = cnt + 1;
    }
   }
   if(cnt == 2){
    return true;
   }else{
    return false;
   }
}

int main()
{
    int n; cin >> n;
    for(int i = 2; i <= n; i++){
        if(is_prime(i)){
            cout << i << ' ';
        }
    }
 return 0;
}

