// Problem: Fall Prevention
// Link to the problem: https://www.codechef.com/problems/FALLPR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mn = 0, x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (y == 1)
        {
            x += a[i];
            if (x < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            x += a[i];
            mn = min(mn, a[i]);
            if (x < 0)
            {
                x -= mn;
                y = 1;
            }
        }
    }
    cout << "YES" << endl;
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