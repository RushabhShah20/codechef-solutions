// Problem: Maximum Deliciousness
// Link to the problem: https://www.codechef.com/problems/KDELI
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, l, ans = 0;
    cin >> n >> k >> l;
    priority_queue<ll> pq;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    ll i = 1;
    while (!pq.empty())
    {
        if (l == k)
        {
            if (i % k == 0)
            {
                ans += pq.top();
            }
        }
        else
        {
            if (i % k == l)
            {
                ans += pq.top();
            }
        }
        i++;
        pq.pop();
    }
    cout << ans << endl;
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