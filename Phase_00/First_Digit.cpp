#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;


    int digit = 0;
    for(int i = 0; i < n; i++){
        digit = n / 10;
        if(i < 10){
            digit = i;
        }break;
    }

    cout << digit;

}
