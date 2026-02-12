// Problem: Alice and Bob
// Link to the problem: https://www.codechef.com/problems/TOYDESIRE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    priority_queue<ll> pq;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0, sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        ans++;
        if (sum >= k)
        {
            break;
        }
    }
    if (sum < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
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