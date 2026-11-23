// Problem: Duplicate Integers
// Link to the problem: https://www.codechef.com/problems/DSAAGP384
bool hasDuplicate(const vector<int> &nums)
{
    const int n = nums.size();
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(nums[i]);
    }
    const bool ans = n != s.size();
    return ans;
}