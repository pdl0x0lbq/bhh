//
// Created by sw on 23-10-26.
//

#include "BFS.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 打印棋盘
void BFS::printBoard(const vector<int> &board) {
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
bool BFS::check(const vector<int> &board, int row, int col) {
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

void BFS::Solve() {
    queue<vector<int>> q;
    q.push(vector<int>(N, -1));

    while (!q.empty()) {
        vector<int> board = q.front();
        q.pop();

        int row = 0;
        while (row < N && board[row] != -1) {
            row++;
        }

        if (row == N) {
            // 找到一个解，打印棋盘
            printBoard(board);
        } else {
            for (int col = 0; col < N; col++) {
                if (check(board, row, col)) {
                    board[row] = col;
                    q.push(board);
                    board[row] = -1; // 回溯
                }
            }
        }
    }
}
BFS::BFS(int n){
    N=n;
}
