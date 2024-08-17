#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             cin >> s[i][j];
        }
         //cout << endl;
    }

    int right_diagonal = 0;
    int left_diagonal = 0;
    for(int i = 0; i < n; i++){
        right_diagonal += s[i][i];
        left_diagonal += s[i][n-1-i];
    }

    int result = abs(right_diagonal - left_diagonal);

    cout << result << endl;

    return 0;
}


