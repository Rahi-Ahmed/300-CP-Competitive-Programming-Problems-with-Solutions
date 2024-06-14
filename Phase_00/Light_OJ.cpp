#include<iostream>
#include <string.h>
using namespace std;

int main() {
  int t; cin >> t;
  cin.ignore();
  while (t--) {
    char s[1010];
    cin.getline(s, 1010);
    int len = strlen(s);
    int i = 0;
    while (i < len) {
      if (s[i] != ' ') {
        int word_start = i;
        while (i < len && s[i] != ' ') {
          i++;
        }
        int word_end = i - 1;
        for (int j = word_end; j >= word_start; j--) {
          cout << s[j];
        }
      }
      else {
        cout << ' ';
        i++;
      }
    }
    cout << '\n';
  }
  return 0;
}
