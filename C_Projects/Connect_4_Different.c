#include <stdio.h>

// Function to check if a player wins after a move
int checkWin(char board[6][7], char player, int row, int col) {
    // Check horizontally
    int count = 0;
    for (int c = 0; c < 7; ++c) {
        if (board[row][c] == player) {
            count++;
            if (count == 4) return 1;
        } else {
            count = 0;
        }
    }

    // Check vertically
    count = 0;
    for (int r = 0; r < 6; ++r) {
        if (board[r][col] == player) {
            count++;
            if (count == 4) return 1;
        } else {
            count = 0;
        }
    }

    // Check diagonally (bottom-left to top-right)
    count = 0;
    for (int r = row, c = col; r >= 0 && c < 7; --r, ++c) {
        if (board[r][c] == player) {
            count++;
            if (count == 4) return 1;
        } else {
            break;
        }
    }
    for (int r = row + 1, c = col - 1; r < 6 && c >= 0; ++r, --c) {
        if (board[r][c] == player) {
            count++;
            if (count == 4) return 1;
        } else {
            break;
        }
    }

    // Check diagonally (top-left to bottom-right)
    count = 0;
    for (int r = row, c = col; r < 6 && c < 7; ++r, ++c) {
        if (board[r][c] == player) {
            count++;
            if (count == 4) return 1;
        } else {
            break;
        }
    }
    for (int r = row - 1, c = col - 1; r >= 0 && c >= 0; --r, --c) {
        if (board[r][c] == player) {
            count++;
            if (count == 4) return 1;
        } else {
            break;
        }
    }

    return 0;
}

int main() {
    char player;
    int col;
    char board[6][7];

    // Input
    scanf("%c %d", &player, &col);
    for (int i = 0; i < 6; ++i) {
        scanf("%s", board[i]);
    }

    // Check if the move is legal
    if (board[0][col] != '.') {
        printf("Illegal move\n");
        return 0;
    }

    // Make the move
    int row;
    for (row = 5; row >= 0; --row) {
        if (board[row][col] == '.') {
            board[row][col] = player;
            break;
        }
    }

    // Check for a win
    if (checkWin(board, player, row, col)) {
        printf("%c wins\n", player);
    } else {
        // Check for a tie or ongoing game
        int ongoing = 0;
        for (int c = 0; c < 7; ++c) {
            if (board[0][c] == '.') {
                ongoing = 1;
                break;
            }
        }
        if (ongoing) {
            printf("Ongoing game\n");
        } else {
            printf("Tie game\n");
        }
    }

    return 0;
}
