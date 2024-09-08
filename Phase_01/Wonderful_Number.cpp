#include<iostream>
using namespace std;
#include <stdio.h>

bool is_palindrome(int n) {
    int reverse_binary_num[40];
    int bit_count = 0;
    while (n > 0) {
        reverse_binary_num[bit_count] = n % 2;
        n = n / 2;
        bit_count++;
    }

    char binary_num[40];
    for (int i = 0, j = bit_count - 1; i < bit_count; i++, j--){
            binary_num[i] = reverse_binary_num[j];
    }

    for(int i = 0; i < bit_count; i++){
        if(binary_num[i] != reverse_binary_num[i]){
            return false;
        }
    }
    return true;
}


int main() {

    int n;
    cin >> n;

    if((n % 2 == 1) and is_palindrome(n)){
       cout << "YES" << '\n';
    } else {
       cout << "NO" << '\n';
    }

   return 0;
}


