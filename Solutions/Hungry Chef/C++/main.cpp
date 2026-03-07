// Problem: Hungry Chef
// Link to the problem: https://www.codechef.com/problems/BURGERS2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, n, r;
    cin >> x >> y >> n >> r;
    for (ll i = n; i >= 0; i--)
    {
        if ((i * y) + ((n - i) * x) <= r)
        {
            cout << n - i << " " << i << endl;
            return;
        }
    }
    cout << -1 << endl;
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