
#include <bits/stdc++.h>
using namespace std;

void even(long long int n){

    while(n != 1){
        cout << n << " ";
        if(n % 2 == 0){
        n = n/2;
    }else{
        n = 3*n + 1;
       }
    }
    cout << n;
}
int main() {

    long long int t;
    cin >> t;

   even(t);

return 0;
}
