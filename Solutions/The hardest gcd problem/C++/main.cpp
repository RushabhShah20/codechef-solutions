// Problem: The hardest gcd problem
// Link to the problem: https://www.codechef.com/problems/GCDDIV
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, g, mx = 1;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
        {
            g = x;
        }
        else
        {
            g = __gcd(g, x);
        }
    }
    for (ll i = 2; i * i <= g; i++)
    {
        while (g % i == 0)
        {
            g /= i;
            mx = max(mx, i);
        }
    }
    mx = max(mx, g);
    if (mx <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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