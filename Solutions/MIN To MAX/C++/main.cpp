// Problem: MIN To MAX
// Link to the problem: https://www.codechef.com/problems/OPMIN
class Solution
{
public:
    int countNonMinimum(vector<int> &nums)
    {
        const int mn = *min_element(nums.begin(), nums.end());
        int ans = 0;
        for (const int num : nums)
        {
            if (num != mn)
            {
                ans++;
            }
        }
        return ans;
    }
};
