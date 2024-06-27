#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string firstName[n];
    string lastName[n];

    for (int i = 0; i < n; i++) {
        cin >> firstName[i] >> lastName[i];
    }

    bool flag = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (firstName[i] == firstName[j] && lastName[i] == lastName[j]) {
                flag = true;
                cout << "Yes" << endl;
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    if (!flag) {
        cout << "No" << endl;
    }

    return 0;
}
