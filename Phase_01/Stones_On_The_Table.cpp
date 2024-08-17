#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    int minimum_number_of_stones  = 0;
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]){
            minimum_number_of_stones++;
        }
    }

    cout << minimum_number_of_stones << endl;

    return 0;
}


