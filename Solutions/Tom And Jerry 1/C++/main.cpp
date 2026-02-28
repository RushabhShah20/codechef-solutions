// Problem: Tom And Jerry 1
// Link to the problem: https://www.codechef.com/problems/TANDJ1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    const ll x = abs(c - a) + abs(d - b);
    if ((x <= k) && (x % 2) == (k % 2))
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