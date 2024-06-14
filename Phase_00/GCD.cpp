#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a , b; cin >> a >> b;
    cout << __gcd(a, b) <<endl;
}

/*int main()
{
    int a, b; cin >> a >> b;

    for(int i = 1; i <= a; i++){
        if(a % i == 0){
           cout << "A= " << i << endl;
           c = i;
        }
    }
    for(int i = 1; i <= b; i++){
        if(b % i == 0){
           cout << "B= " << i << endl;
           d= i;
        }
    }
    return 0;
}*/

