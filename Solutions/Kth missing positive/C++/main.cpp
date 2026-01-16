// Problem: Kth missing positive
// Link to the problem: https://www.codechef.com/problems/KTHMISSING
class Solution
{
public:
    int findKthPositive(vector<int> &nums, int k)
    {
        const int n = nums.size();
        int l = 0, r = n, m;
        while (l < r)
        {
            m = (l + r) / 2;
            if (nums[m] - 1 - m < k)
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
        return l + k;
    }
};
