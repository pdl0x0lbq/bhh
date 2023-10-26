//
// Created by sw on 23-10-25.
//

#ifndef BHH_DFS_H
#define BHH_DFS_H


class DFS{
public:
    void printBoard(std::vector<int> &board) const;
    bool isSafe(std::vector<int> &board, int row, int col) const;
    void Solve(std::vector<int> &board, int row);
};


#endif //BHH_DFS_H
