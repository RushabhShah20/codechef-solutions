// Problem: Find the insert position
// Link to the problem: https://www.codechef.com/problems/INSERTPOS
class Solution
{
public:
    int searchInsertPosition(vector<int> &arr, int target)
    {
        int n = arr.size(), l = 0, r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (arr[m] < target)
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
};
