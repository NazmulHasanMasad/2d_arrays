class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int col = matrix[0].size();
        // col
        int x = 0;
        // rows
        int y = 0;
        int dx = 1;
        int dy = 0;
        vector<int> ans;

        for (int i = 0; i < rows * col; i++)
        {
            ans.push_back(matrix[y][x]);
            matrix[y][x] = -101;

            if (!(0 <= y && y < rows && 0 <= x && x < col) || matrix[y + dy][x + dx] == -101)
            {
                int temp = dx;
                dx = -dy;
                dy = temp;
            }

            x += dx;
            y += dy;
        }
    }
};