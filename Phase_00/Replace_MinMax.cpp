#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int x; cin >> x;
   int a[x];
   for(int i = 1; i <= x; i++){
     cin >> a[i];
   }

   int minimum_number = 1e9, position_of_minimum_number = -1;
   for(int i = 1; i <= x; i++){
        if(a[i] < minimum_number){
            minimum_number = a[i];
            position_of_minimum_number = i;
        }
   }
    //cout << minimum_number << " "<< position_of_minimum_number << endl;



   int maximum_number = -1e9, position_of_maximum_number = -1;
   for(int i = 1; i <= x; i++){
        if(a[i] > maximum_number){
            maximum_number = a[i];
            position_of_maximum_number = i;
        }
   }
   //cout << maximum_number << " "<< position_of_maximum_number << endl;


   swap(a[position_of_minimum_number], a[position_of_maximum_number]);
   for(int i = 1; i <= x; i++){
     cout << a[i] << ' ';
   }

    return 0;
}




