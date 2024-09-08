#include<iostream>
using namespace std;

int summation(int a, int b){
    return a + b;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int res = summation(x, y);
    cout << res << endl;
}
