// Problem: Chef and Mean
// Link to the problem: https://www.codechef.com/problems/CHFM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (((x - a[i]) * n) == (x * (n - 1)))
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << "Impossible" << endl;
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