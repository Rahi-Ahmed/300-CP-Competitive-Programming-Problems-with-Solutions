#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
         cin >> a[i];
    }

    int lowest = a[0];
    for(int i = 0; i < n; i++){
        lowest = min(lowest, a[i]);
    }
    cout << lowest << ' ';

     for(int i = 0; i < n; i++){
        if(a[i] == lowest){
           cout << i+1;
           return 0;
        }
    }

    return 0;

}
