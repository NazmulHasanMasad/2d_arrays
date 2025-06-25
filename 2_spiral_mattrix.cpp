#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0;
    int column_end = m - 1;
    int count = n * m;
    while (row_start <= row_end && column_start <= column_end)
    {
        if (count != 0)
        {
            for (int col = column_start; col <= column_end; col++)
            {
                cout << arr[row_start][col];
                count--;
            }
            row_start++;

            for (int row = row_start; row <= row_end; row++)
            {
                cout << arr[row][column_end];
                count--;
            }
            column_end--;

            if (row_start <= row_end)
            {
                for (int col = column_end; col >= column_start; col--)
                {
                    cout << arr[row_end][col];
                    count--;
                }
            }
            row_end--;

            if (column_start <= column_end)
            {
                for (int row = row_end; row >= row_start; row--)
                {
                    cout << arr[row][column_start];
                    count--;
                }
            }
            column_start++;
        }
    }

    return 0;
}