//
// Created by sw on 23-10-26.
//

#ifndef BHH_BFS_H
#define BHH_BFS_H

#include <vector>
#include "vector"

class BFS {
public:
    int N;
    explicit BFS(int n);
    void printBoard(const std::vector<int> &board);
    bool check(const std::vector<int> &board, int row, int col);
    void Solve();
};


#endif //BHH_BFS_H
