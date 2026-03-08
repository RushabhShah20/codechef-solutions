// Problem: Even Pair Sum
// Link to the problem: https://www.codechef.com/problems/EVENPSUM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, p, q, r, s;
    cin >> a >> b;
    if (a % 2 == 0)
    {
        p = q = a / 2;
    }
    else
    {
        p = (a + 1) / 2;
        q = a / 2;
    }
    if (b % 2 == 0)
    {
        r = s = b / 2;
    }
    else
    {
        r = (b + 1) / 2;
        s = b / 2;
    }
    const ll ans = p * r + q * s;
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