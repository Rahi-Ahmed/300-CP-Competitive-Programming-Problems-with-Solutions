#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    int product = a * b * c * d;

    int last_two_digits = product % 100;
    if (last_two_digits < 10) {
        cout << 0 << last_two_digits <<endl;
    }
    else {
        cout << last_two_digits <<endl;
    }

    return 0;
}
