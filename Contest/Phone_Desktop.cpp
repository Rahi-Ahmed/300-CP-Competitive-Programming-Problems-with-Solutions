#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Total screens needed for 2x2 icons
        int screens_for_2x2 = 0;
        if(y % 2 == 0){
            screens_for_2x2 = y / 2;
        }else if(y % 2 == 1){
            screens_for_2x2 = ceil((double)y / 2);
        }
        int used_cells_by_2x2 = y * 4;
        int remaining_cells = screens_for_2x2 * 15 - used_cells_by_2x2;

        // Calculate remaining 1x1 icons to be placed
        x -= remaining_cells;
        if (x < 0) x = 0;

        // Calculate screens needed for the remaining 1x1 icons
        int screens_for_1x1 = (x + 14) / 15; // (x + 14) / 15 is equivalent to ceil(x / 15.0)

        // Total screens needed
        int total_screens = screens_for_2x2 + screens_for_1x1;
        cout << total_screens << endl;
    }
    return 0;
}
