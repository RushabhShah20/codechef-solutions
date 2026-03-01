// Problem: Chef and GCD
// Link to the problem: https://www.codechef.com/problems/CHFGCD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (__gcd(x, y) > 1)
    {
        cout << 0 << endl;
    }
    else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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