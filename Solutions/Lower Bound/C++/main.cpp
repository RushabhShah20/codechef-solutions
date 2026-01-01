// Problem: Lower Bound
// Link to the problem: https://www.codechef.com/problems/LOWERBOUND1
int solve(vector<int> &nums, int x)
{
    int n = nums.size(), l = 0, r = n - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] <= x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return l;
}