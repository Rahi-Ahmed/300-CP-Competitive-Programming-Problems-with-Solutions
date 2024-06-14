#include<bits/stdc++.h>
using namespace std;



int main()
{
  string s;
  cin >> s;

  int len = s.size();

  int ans = 0;
  for(int i = 0; i < len; i++){
    int a = s[i] - '0';
    ans += a;
  }

  cout << ans << endl;

}
