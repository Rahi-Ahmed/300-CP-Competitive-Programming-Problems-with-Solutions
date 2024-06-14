#include<iostream>
using namespace std;
const int pass = 1999;
int main()
{

    int x;

    while(cin >> x){

        if(x == pass){
            cout << "Correct\n" << endl;
            break;
        }else{
        cout << "Wrong\n" << endl;
        }
    }

    return 0;
}
