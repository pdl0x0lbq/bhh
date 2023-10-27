//
// Created by sw on 23-10-26.
//

#include "DFS.h"
#include <iostream>
#include <vector>
using namespace std;

void DFS::printBoard(vector<int> &board) const{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
// 检查是否可以在board[row][col]放置皇后
bool DFS::check(vector<int> &board, int row, int col) const {
    // 检查列是否有其他皇后
    for (int i = 0; i < row; i++) {
        if (board[i] == col) {
            return false;
        }
    }

    // 检查左上到右下的对角线
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i] == j) {
            return false;
        }
    }

    // 检查右上到左下的对角线
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i] == j) {
            return false;
        }
    }

    return true;
}

// 使用深度优先搜索求解八皇后问题
void DFS::solve(vector<int> &board, int row) {
    if (row == N) {
        // 找到一个解，打印棋盘
        printBoard(board);
        return;
    }

    for (int col = 0; col < N; col++) {
        if (check(board, row, col)) {
            board[row] = col;
            solve(board, row + 1);
            board[row] = -1; // 回溯
        }
    }
}
DFS::DFS(int n){
    N=n;
}
void DFS::Solve(){
    vector<int> board(N, -1);
    solve(board,0);
}
