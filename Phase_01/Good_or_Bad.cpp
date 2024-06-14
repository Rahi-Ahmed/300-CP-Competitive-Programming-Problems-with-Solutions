#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
    cin >> s;

    int len = s.size();

    int flag = 0;

    for(int l = 0; l < len-2; l++){
       if(s[l] == '0' && s[l+1] == '1' && s[l+2] == '0'){
            flag = 1;
            break;
       }else if(s[l] == '1' && s[l+1] == '0' && s[l+2] == '1'){
            flag = 1;
            break;
       }
    }

    if(flag == 1){
        cout << "Good" << endl;
    }else{
        cout << "Bad" << endl;
    }
    }


}
