#include <bits/stdc++.h>
using namespace std;

int main()
{
            int n;
            cin >> n;

            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }

           long long int max_sum = -1e18;
           long long int sum = -1e18;
           int i = 0;
           int j = i;
           while(j < n){
             sum = (long long) sum + a[j];
             if(sum > max_sum){
                max_sum = sum;
             }

             if(sum < 0){
                sum  = 0;
             }
             j++;
           }

           cout << max_sum << endl;

}

