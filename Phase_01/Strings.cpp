#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    int a_len = a.size();
    int b_len = b.size();

    cout << a_len << " " << b_len << endl;
    cout << a << b << endl;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;
}
