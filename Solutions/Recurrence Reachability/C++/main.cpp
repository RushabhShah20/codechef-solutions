// Problem: Recurrence Reachability
// Link to the problem: https://www.codechef.com/problems/SUPSKIP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m <= n)
    {
        const ll x = min(m, n - 1);
        cout << x << " " << x + 1 << endl;
        return;
    }
    for (int k = 2; k <= 30; k++)
    {
        const ll p = 1 << k, i = (m - n + (p - 2) - 1) / (p - 2), j = (m - 1) / (p - 1);
        if (i <= j)
        {
            const ll d = i, x = m - (p - 1) * d, y = x + d;
            cout << x << " " << y << endl;
            return;
        }
    }
    cout << "-1" << endl;
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