#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }*/

    int sum = 0;
     int max_sum = INT_MIN; // Initialize max_sum to a very low value
    int i = 0;

    while(i < 4){
         for(int j = 0; j < 4; j++){
            sum = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
            if(sum > max_sum){
                max_sum = sum;
            }
            sum = 0;

      }
      i++;
    }

    cout << max_sum << endl;

    return 0;
}

