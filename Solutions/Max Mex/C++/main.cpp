// Problem: Max Mex
// Link to the problem: https://www.codechef.com/problems/MEX
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll ans = 0;
    for (ll i = 0; true; i++)
    {
        if (s.count(i) == 1)
        {
            continue;
        }
        if (k == 0)
        {
            ans = i;
            break;
        }
        k--;
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