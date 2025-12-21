// Problem: Set Matrix Zeroes
// Link to the problem: https://www.codechef.com/problems/MATSETZERO
void setZeroes(vector<vector<int>> &mat)
{
    const int n = mat.size(), m = mat[0].size();
    vector<int> rows, cols;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                rows.push_back(i);
                cols.push_back(j);
            }
        }
    }
    for (int i = 0; i < rows.size(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[rows[i]][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < cols.size(); j++)
        {
            mat[i][cols[j]] = 0;
        }
    }
}