#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[1005];
    cin >> a;


    int len = strlen(a);

    bool palindrome = true;
    for(int i = 0; i < len; i++){
        if(a[i] != a[len-1-i]){
            palindrome = false;
            break;
        }
    }
    if(palindrome){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
