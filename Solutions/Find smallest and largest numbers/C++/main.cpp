// Problem: Find smallest and largest numbers
// Link to the problem: https://www.codechef.com/problems/DSACPR66
pair<int, int> findMinMax(int n, const vector<int> &arr)
{
    pair<int, int> ans = {INT_MAX, INT_MIN};
    for (int i = 0; i < n; i++)
    {
        ans.first = min(ans.first, arr[i]);
        ans.second = max(ans.second, arr[i]);
    }
    return ans;
}