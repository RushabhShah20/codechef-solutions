// Problem: Large Square
// Link to the problem: https://www.codechef.com/problems/XLSQUARE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a;
    cin >> n >> a;
    ll m = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (i * i > n)
        {
            break;
        }
        else
        {
            m = i;
        }
    }
    const ll ans = m * a;
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