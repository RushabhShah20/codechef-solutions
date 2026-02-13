// Problem: Sliding Window Maximum
// Link to the problem: https://www.codechef.com/problems/PREP23
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    deque<ll> dq;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        while (!dq.empty() && dq.front() <= i - x)
        {
            dq.pop_front();
        }
        while (!dq.empty() && a[dq.back()] < a[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= x - 1)
        {
            ans.push_back(a[dq.front()]);
        }
    }
    for (ll i = 0; i < n - x + 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}