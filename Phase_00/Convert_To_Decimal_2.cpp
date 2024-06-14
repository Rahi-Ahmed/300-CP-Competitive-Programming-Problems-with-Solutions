#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int number_of_ones = 0;
        while(n > 0){
            int remainder = n % 2;
            if(remainder == 1){
                number_of_ones++;
            }
            n = n/2;
        }
        int decimal = 0;
        for(int i = 1; i <= number_of_ones; i++){
            decimal = decimal * 2 + 1;
        }
        cout << decimal << endl;
    }

    return 0;
}
