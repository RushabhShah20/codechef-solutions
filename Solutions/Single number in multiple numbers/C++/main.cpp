// Problem: Single number in multiple numbers
// Link to the problem: https://www.codechef.com/problems/SINGLENUM
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (const int num : nums)
        {
            ans ^= num;
        }
        return ans;
    }
};