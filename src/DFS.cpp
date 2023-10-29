//
// Created by sw on 23-10-26.
//

#include "DFS.h"
#include <iostream>
#include <vector>
using namespace std;

void DFS::printBoard(vector<int> &board) const {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i] == j) {
                cout << "Q "; // 打印皇后
            } else {
                cout << ". "; // 打印空格
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool DFS::check(vector<int> &board, int row, int col) const {
    // 检查列是否有其他皇后
    for (int i = 0; i < row; i++) {
        if (board[i] == col) {
            return false; // 如果在同一列有其他皇后，返回false
        }
    }

    // 检查左上到右下的对角线
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i] == j) {
            return false; // 如果在左上到右下对角线上有其他皇后，返回false
        }
    }

    // 检查右上到左下的对角线
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i] == j) {
            return false; // 如果在右上到左下对角线上有其他皇后，返回false
        }
    }

    return true; // 如果没有冲突，返回true
}

void DFS::solve(vector<int> &board, int row) {
    if (row == N) {
        // 找到一个解，打印棋盘
        printBoard(board);
        return;
    }

    for (int col = 0; col < N; col++) {
        if (check(board, row, col)) {
            board[row] = col; // 在当前行的col列放置皇后
            solve(board, row + 1); // 递归到下一行
            board[row] = -1; // 回溯，重置当前行的皇后位置
        }
    }
}

DFS::DFS(int n) {
    N = n; // 初始化棋盘大小
}

void DFS::Solve() {
    vector<int> board(N, -1); // 初始化棋盘，所有皇后位置设为-1
    solve(board, 0); // 从第一行开始解决问题
}
