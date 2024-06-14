#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;

        /*int l = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        int w = sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
        int area = l*w;*/

        int mx = max(max(max(x1, x2),x3),x4) - min(min(min(x1, x2),x3),x4);
        int area = mx * mx;

        cout << area << endl;
    }
}
