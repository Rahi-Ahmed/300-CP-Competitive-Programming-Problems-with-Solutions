#include <iostream>
#include <algorithm>
using namespace std;

int max_draws(int p1, int p2, int p3) {
    int total_points = p1 + p2 + p3;
    if (total_points % 2 == 1) return -1;  // If total points are odd, it's not possible

    int total_games = total_points / 2;
    if (total_points == 0) return 0;  // If the total games are less than the highest score, it's not possible

    // Maximum number of draws
    int a = p1+p2;
    if(a > total_games){
        return total_games;
    }else{
       return a;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        cout << max_draws(p1, p2, p3) << endl;
    }
    return 0;
}
