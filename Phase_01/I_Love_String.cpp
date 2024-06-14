#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string S, T;
        cin >> S >> T;

        int n = S.size();
        int m = T.size();

        int len;
        if(n < m){
            len = m;
        }else{
            len = n;
        }

        for(int i = 0; i < len; i++){
                if(i < n){
                    cout << S[i];
                }

                if(i < m){
                    cout << T[i];
                }
        }
        cout << endl;
    }
}
