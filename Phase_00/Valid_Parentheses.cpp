#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char s[100]; cin >> s;
    bool is_parentheses = false;
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if(s[i] == '(' && s[i+1] == ')'){
            is_parentheses = true;
        }else if( s[i] == '[' && s[i+1] == ']'){
            is_parentheses = true;
        }else if( s[i] == '{' && s[i+1] == '}'){
            is_parentheses = true;
        }
    }
    cout << is_parentheses;
       return 0;
}
