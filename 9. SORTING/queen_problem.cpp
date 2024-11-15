#include <iostream>
#include <vector>
using namespace std;
const int N = 5;
int count=0;

bool isSafe(vector<vector<int>> &board, int row, int col){
    for (int x = 0; x < col; x++)       //row attack
        if (board[row][x] == 1)
            return false;
    for (int x = row, y = col; x >= 0 && y >= 0; x--, y--) //upper diagonal attack
        if (board[x][y] == 1)
            return false;
    for (int x = row, y = col; x < N && y >= 0; x++, y--) //upper diagonal attack
        if (board[x][y] == 1)
            return false;
    return true;
}
bool solveNQueen(vector<vector<int>> &board, int col){

    if (col == N){
        count++;
        // for (int i = 0; i < N; i++){
        //     for (int j = 0; j < N; j++)
        //         cout << board[i][j] << " ";
        //     cout << endl;
        // }
        // cout << endl;
        // return true;
    }
    for (int i = 0; i < N; i++){
        if (isSafe(board, i, col)){
            board[i][col] = 1;
            if (solveNQueen(board, col + 1))
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> board(N, vector<int>(N, 0));
    if (!solveNQueen(board, 0))
        cout << "no solution found";
    cout<<"total solution are: "<<count;    
    return 0;
}