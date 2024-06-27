#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
    int d, t, s;
    cin >> d >> t >> s;

    double average = (double) d/s;

    if(average <= t){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
