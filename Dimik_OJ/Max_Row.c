#include <stdio.h>

// Finding Maximum 1's in a row

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