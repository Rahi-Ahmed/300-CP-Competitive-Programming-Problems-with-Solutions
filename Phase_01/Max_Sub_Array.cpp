#include <bits/stdc++.h>
using namespace std;

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

    for(int i = 0; i < n; i++){
            int max_number = a[i];
        for(int j = i; j < n; j++){
                for(int k = i; k <= j; k++){
                    if(max_number < a[k]){
                        max_number = a[k];
                    }
                }
                cout << max_number << " ";
        }

        }

        cout << endl;
    }

}
