// Problem: Array - Pascals or Khayyams triangle
// Link to the problem: https://www.codechef.com/problems/PREP01
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ull ans = 1;
    for (ll i = 0; i < n; i++)
    {
        cout << ans;
        if (i != n - 1)
        {
            cout << " ";
        }
        ans = ans * (n - 1 - i) / (i + 1);
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}