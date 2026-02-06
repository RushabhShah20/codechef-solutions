// Problem: Longest Increasing Subsequence
// Link to the problem: https://www.codechef.com/problems/PHONEPE05
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> nums(n), v;
    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (const ll num : nums)
    {
        if (v.empty() || num > v.back())
        {
            v.push_back(num);
        }
        else
        {
            vector<ll>::iterator idx = lower_bound(v.begin(), v.end(), num);
            *idx = num;
        }
    }
    const ll ans = v.size();
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}