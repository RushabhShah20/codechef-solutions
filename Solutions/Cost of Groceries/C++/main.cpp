// Problem: Cost of Groceries
// Link to the problem: https://www.codechef.com/problems/KITCHENCOST
class Solution
{
public:
    int compute(int n, int x, vector<int> &a, vector<int> &b)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                ans += b[i];
            }
        }
        return ans;
    }
};
