#include<bits/stdc++.h>
using namespace std;

void swap_row(int** a, int n, int x, int y){
    for(int i = 0; i < n; i++){
            swap(a[x-1][i], a[y-1][i]);
    }
}

void swap_column(int** a, int n, int x, int y){
    for(int i = 0; i < n; i++){
            swap(a[i][x-1], a[i][y-1]);
    }
}

void print_mattrix(int** a, int n){
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    // Dynamically allocate a 2D array
    int** a = new int*[n];
    for(int i = 0; i < n; i++){
        a[i] = new int[n];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }


    swap_row(a, n, x, y);
    swap_column(a, n, x, y);
    print_mattrix(a, n);

    // Deallocate memory
    for(int i = 0; i < n; i++){
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
