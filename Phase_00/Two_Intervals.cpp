#include<bits/stdc++.h>
using namespace std;


int main() {
  int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
  int left_boundary = max(l1, l2);
  int right_boundary = min(r1, r2);
  if (left_boundary <= right_boundary) {
    cout << left_boundary << ' ' << right_boundary << '\n';
  }
  else {
    cout << -1 << '\n';
  }
  return 0;
}

/*int main()
{
    int L1, R1, L2, R2; cin >> L1 >> R1 >> L2 >> R2;
    int interval_start;
    int interval_end;
    if(L2 >= R1){
        cout << -1 << endl;
    }else{
        if(L1 <= L2){
        for(int i = L1; i <= R1; i++){
            if(L2 == i){
                interval_start = i;
            }else if(i == R2){
                interval_end = i;
            }else{
                if(R1 > R2){
                    interval_end = R2;
                }else{
                    interval_end = R1;
                }
            }
        }
    }else{
        for(int i = L2; i <= R2; i++){
            if(L1 == i){
                interval_start = i;
            }else if(i == R1){
                interval_end = i;
            }else{
                if(R1 > R2){
                    interval_end = R2;
                }else{
                    interval_end = R1;
                }
            }
        }
      }
      cout << interval_start << ' ' << interval_end << endl;
    }

    return 0;
}*/

