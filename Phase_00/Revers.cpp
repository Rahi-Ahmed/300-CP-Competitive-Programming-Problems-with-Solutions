
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin >> n ;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = n-1; i >= 0; i--){
        cout << a[i] << ' ';
    }
}


// built in method
/*int n = 6;
int a[n] = {2, 3, 5, 7, 4, 8};

//reverse(a+1, a+4);
sort(a, a+n);

for(int i = 0; i < n; i++){
    cout << a[i] << ' ';
   }
}*/


