#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(s[i] == ','){
            s[i] = ' ';
        }else if(s[i] <= 90 && s[i] >= 65){
            s[i] = s[i]+32;
        }else if(s[i] <= 122 && s[i] >= 97){
            s[i] = s[i] - 32;
        }
    }

    for(int i = 0; i < len; i++){
        cout << s[i];
    }
}
