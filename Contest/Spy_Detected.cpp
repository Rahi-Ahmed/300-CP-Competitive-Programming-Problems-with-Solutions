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

        int first_type = a[0];
        int first_type_count = 0;
        int second_type = a[0];
        int second_type_count = 0;
        int position = 0;
        for(int i = 1; i < n; i++){
            if(first_type == a[i]){
                first_type_count++;
            }else{
                second_type = a[i];
                second_type_count++;
            }
        }
        if(first_type_count < second_type_count){
            cout << 1 << endl;
        }else{
           for(int i = 1; i < n; i++){
              if(second_type == a[i]){
                position = i + 1;
                cout << position << endl;
                break;
              }
           }
        }
    }
}
