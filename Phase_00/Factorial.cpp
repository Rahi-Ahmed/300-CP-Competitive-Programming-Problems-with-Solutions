#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        int n; cin >> n;
        long long int fact = 1;
        for(int i = 1; i <= n; i++){
          fact = fact*i;
    }
 cout << fact << endl;;
}

return 0;

}
