#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> PII;
const ll mx = 3e5+10;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    int MaxDepth = 0, CurDepth = 0, Start = -1;
    string Ans = "";
    for(int i = 0; i< s.size(); i++) {
        if(s[i] == '(') {
            CurDepth ++;
            if(CurDepth > MaxDepth ) {
                MaxDepth = CurDepth;
                Start = i+1;
            }
        } else if(s[i] == ')') {
            CurDepth --;
        }

    }

    for(int i = Start; ; i++) {
        if(s[i] == ')') break;
        Ans += s[i];
    }

    cout<<Ans<<endl;
}
