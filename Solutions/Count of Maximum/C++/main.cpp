// Problem: Count of Maximum
// Link to the problem: https://www.codechef.com/problems/MAXCOUNT
class Solution
{
public:
    pair<int, int> mostFrequent(vector<int> &arr)
    {
        map<int, int> m;
        for (const int i : arr)
        {
            m[i]++;
        }
        int y = 0;
        for (const pair<int, int> i : m)
        {
            y = max(y, i.second);
        }
        int x = 100001;
        for (const pair<int, int> i : m)
        {
            if (i.second == y)
            {
                x = min(x, i.first);
            }
        }
        const pair<int, int> ans = make_pair(x, y);
        return ans;
    }
};