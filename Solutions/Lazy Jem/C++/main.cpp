// Problem: Lazy Jem
// Link to the problem: https://www.codechef.com/problems/TALAZY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, b, m, ans = 0;
    cin >> n >> b >> m;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            ans += ((n / 2) * m);
        }
        else
        {
            ans += (((n + 1) / 2) * m);
        }
        m *= 2;
        ans += b;
        n /= 2;
    }
    ans -= b;
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