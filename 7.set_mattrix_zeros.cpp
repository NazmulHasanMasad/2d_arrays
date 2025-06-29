#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int R = matrix.size();
    int C = matrix[0].size();
    set<int> rows;
    set<int> col;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (matrix[i][j] == 0)
            {

                rows.insert(i);
                col.insert(j);
            }
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (rows.find(i) != rows.end() || col.find(j) != col.end())
            {
                matrix[i][j] == 0;
            }
        }
    }
}
