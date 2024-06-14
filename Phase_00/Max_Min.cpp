#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int x; cin >> x;
   int a[x];
   for(int i = 1; i <= x; i++){
     cin >> a[i];
   }

   int mx = a[0];
   for(int i = 1; i <= x; i++){
     mx = max(mx, a[i]);
   }

   int mn = 1000000;
   for(int i = 1; i <= x; i++){
     mn = min(mn, a[i]);
   }
   cout << mn << " " << mx <<endl;;
    return 0;
}



