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
                cout << "Q "; // 打印皇后
            } else {
                cout << ". "; // 打印空格
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

void BFS::Solve() {
    queue<vector<int>> q; // 创建队列用于BFS
    q.push(vector<int>(N, -1)); // 初始化队列，将一个N大小的向量入队，-1表示空行

    while (!q.empty()) {
        vector<int> board = q.front(); // 从队列中取出一个棋盘状态
        q.pop(); // 将取出的状态出队

        int row = 0;
        while (row < N && board[row] != -1) {
            row++; // 寻找空行
        }

        if (row == N) {
            // 找到一个解，打印棋盘
            printBoard(board);
        } else {
            for (int col = 0; col < N; col++) {
                if (check(board, row, col)) {
                    board[row] = col; // 在当前行的col列放置皇后
                    q.push(board); // 将新状态入队
                    board[row] = -1; // 回溯，重置当前行的皇后位置
                }
            }
        }
    }
}

BFS::BFS(int n) {
    N = n; // 初始化棋盘大小
}
