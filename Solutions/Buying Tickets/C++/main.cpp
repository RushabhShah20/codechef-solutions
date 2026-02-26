// Problem: Buying Tickets
// Link to the problem: https://www.codechef.com/problems/BUYTICK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    priority_queue<ll, vector<ll>, greater<>> pq;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            pq.push(a[i]);
        }
    }
    if (pq.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        ll ans = 0;
        while (k--)
        {
            ans += pq.top();
            pq.pop();
        }
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