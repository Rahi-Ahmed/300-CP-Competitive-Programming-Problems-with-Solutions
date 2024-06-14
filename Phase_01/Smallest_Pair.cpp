#include <bits/stdc++.h>
using namespace std;

int smallest_pair(int n, int a[]){
    long long int smallest = 1e17;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] + a[j] + j - i < smallest){
                smallest = a[i] + a[j] + j - i;
            }
        }
    }
    return smallest;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

       int x =  smallest_pair(n, a);
       cout << x << endl;
    }

    return 0;
}
