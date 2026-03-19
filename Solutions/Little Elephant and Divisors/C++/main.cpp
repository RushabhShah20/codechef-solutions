// Problem: Little Elephant and Divisors
// Link to the problem: https://www.codechef.com/problems/LEDIV
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, g;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
        {
            g = x;
        }
        g = __gcd(g, x);
    }
    if (g == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (ll i = 2; i * i <= g; i++)
        {
            if (g % i == 0)
            {
                g = i;
                break;
            }
        }
        cout << g << endl;
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