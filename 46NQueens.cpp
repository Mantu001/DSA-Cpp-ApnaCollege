// N Queen problem using backtracking  (solved on lC51)
#include <iostream>
void nQueen(int board[][], int row, int n, int ans){
    int row = 0;
    if (row == n){
        ans.push_back(board);
        return;
    }
    for (int col = 0; col<n; colO++){
        if isSafe(board, row, col, n){
            board[row][col] = 'Q';
            nQueen (board, row+1, n){
                board[row][col] = '.';
            }
        }
    }
}
using namespace std;

int main() {
    
    return 0;
}


// N Knights problem HW