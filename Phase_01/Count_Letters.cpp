#include<bits/stdc++.h>
using namespace std;

int main(){
    string S; // Buffer to hold the input string
    int count[26] = {0}; // Array to hold the count of each letter

    // Reading the input string
    cin >> S;

    // Counting occurrences of each letter
    for (int i = 0; S[i] != '\0'; i++) {
        count[S[i] - 'a']++;
    }

    // Printing the results in ascending order
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
