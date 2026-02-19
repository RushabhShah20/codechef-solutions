// Problem: Max Minus Min
// Link to the problem: https://www.codechef.com/problems/MAXMIN6
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll x = -1;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        x = max(x, a);
        pq.push(a);
    }
    ll y = x;
    ll ans = x - pq.top();
    while (pq.top() < y)
    {
        ll z = pq.top();
        pq.pop();
        z *= 2;
        pq.push(z);
        x = max(x, z);
        ans = min(ans, x - pq.top());
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