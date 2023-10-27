//
// Created by sw on 23-10-25.
//

#ifndef BHH_DFS_H
#define BHH_DFS_H
#include <vector>

class DFS{
public:
    int N;
    explicit DFS(int n);
    void printBoard(std::vector<int> &board) const;
    bool check(vector<int> &board, int row, int col) const;
    void solve(std::vector<int> &board, int row);
    void Solve();
};


#endif //BHH_DFS_H
