// Problem: Prime Reversal
// Link to the problem: https://www.codechef.com/problems/PRIMEREVERSE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            x++;
        }
        if (b[i] == '1')
        {
            y++;
        }
    }
    if (x == y)
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