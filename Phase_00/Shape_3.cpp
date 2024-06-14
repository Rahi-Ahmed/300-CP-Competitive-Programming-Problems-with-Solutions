#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row; cin >> row;
    for(int i = 1; i <= row; i++){
        int stars = 2*i - 1;
        int space = row - i;
        for(int i = 1; i <= space; i++){
            cout << " ";
        }
        for(int i = 1; i <= stars; i++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = row; i >= 1; i--){
        int stars = 2*i - 1;
        int space = row - i;
        for(int i = 1; i <= space; i++){
            cout << " ";
        }
        for(int i = 1; i <= stars; i++){
            cout << "*";
        }
        cout << endl;
    }
}
