#include <stdio.h>

// Finding Maximum 1's in a row
// Running in O(n) time for finding the row that contains the most 1's
// Assuming all the 1's come before 0's in the row

int main(){
    int a[3][3] = {{1, 0, 1}, {1, 1, 1}, {0, 0, 0}};
    int column_size = 3;
    int row_size = 3;

    int max_row = 0;
    int row = 0, column = -1;
    while(column < column_size && row < row_size){
        if(a[row][column+1] == 1){
            column++;
            max_row = row;
        }else{
            row++;
        }
    }

    printf("Max number of 1's is in row %d \n", max_row);
}


// Using for loop
/*#include <stdio.h>

int main() {
    int a[3][3] = {{0, 1, 1}, {0, 1, 1}, {1, 1, 1}};
    int column_size = 3;
    int row_size = 3;

    int max_row = 0;
    int column = -1, row = 0;
    for(; row < row_size && column < column_size; ){
        if(a[row][column+1] == 1){
            max_row = row;
            column++;
        }else{
            row++;
        }
    }

    printf("Max number of 1's is in row %d \n", max_row);

    return 0;
}*/

