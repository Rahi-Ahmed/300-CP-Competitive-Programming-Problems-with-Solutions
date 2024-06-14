#include<bits/stdc++.h>
using namespace std;

int main()
{
    int days; cin >> days;
    int year, month;

    if(days >= 365){
         year = days/365;
         cout << year << " years"  << endl;
        }else{
           cout << 0 << " years"  << endl;
        }

        int left_days = days - year*365;


        if(left_days >= 30){
            month = left_days/30;
             cout << month << " months" << endl;
        }else{
          cout << 0 << " months" << endl;
        }

         int day = left_days - month*30;
         if(day > 0){
            cout << day << " days" << endl;
         }else{
            cout << 0 << " days" << endl;
         }


}

