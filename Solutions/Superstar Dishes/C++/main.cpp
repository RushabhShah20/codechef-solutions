// Problem: Superstar Dishes
// Link to the problem: https://www.codechef.com/problems/MAJORELE2P
vector<long long> findSuperstarDishes(vector<long long> &a, long long n)
{
    map<long long, long long> m;
    for (long long i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    vector<long long> ans;
    for (const pair<long long, long long> i : m)
    {
        if (i.second > n / 3)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}
