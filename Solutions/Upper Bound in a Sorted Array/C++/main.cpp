// Problem: Upper Bound in a Sorted Array
// Link to the problem: https://www.codechef.com/problems/UPPERBOUND1
int upperBound(const vector<int> &nums, int x)
{
    int n = nums.size(), l = 0, r = n;
    while (l < r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] > x)
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    return l;
}