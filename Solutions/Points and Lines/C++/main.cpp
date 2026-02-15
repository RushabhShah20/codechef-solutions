// Problem: Points and Lines
// Link to the problem: https://www.codechef.com/problems/POLIN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a.insert(x);
        b.insert(y);
    }
    const ll ans = a.size() + b.size();
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