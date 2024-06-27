#include <stdio.h>


int main (void){
    char c[10][10];
    int diagonal = 0 , horizontal = 0, vertical = 0, ongoing = 0, flag = 0;
    char player_to_move;
    int position;
    scanf(" %c %d", &player_to_move, &position);

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 7; j++){
            scanf(" %c",&c[i][j]);
        }
        //printf("\n");
    }

    for(int i = 0; i <= 6; i++){
        for(int j = 0; j < 7; j++){
            if(c[i][j] == '.'){
                ongoing += 1;
            }else if(c[i][i] == player_to_move || c[i][position == i] == '.'){
                diagonal += 1;
            }else if((position == i && c[j][position] == '.') || c[j][i] == player_to_move){
                vertical += 1;
            }else if(c[i][j] || c[i][position == j] == '.'){
                horizontal += 1;
            }else{
                flag = 1;
            }
        }
    }

    if(diagonal == 4){
        printf("%c wins", player_to_move);
    }else if(ongoing == 42){
        printf("Ongoing game");
    }else if(vertical == 4){
        printf("%c wins", player_to_move);
    }else if(horizontal == 4){
        printf("%c wins", player_to_move);
    }else if(flag == 0){
        printf("Illegal move");
    }else{
        printf("Tie game");
    }

}