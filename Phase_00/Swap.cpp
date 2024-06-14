#include<bits/stdc++.h>
using namespace std;

int swapI(int x, int y){
  int temp = y;
   y = x;
   x = temp;
   cout << x << " " << y <<endl;

}

int main ()
{
   int x, y; cin >> x >> y;
   swapI(x,y);

    return 0;
}


