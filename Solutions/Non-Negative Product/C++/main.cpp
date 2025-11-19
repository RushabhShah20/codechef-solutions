// Problem: Non-Negative Product
// Link to the problem: https://www.codechef.com/problems/NONNEGPROD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll count = 0, zeroes = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            count++;
        }
        if (a[i] == 0)
        {
            zeroes++;
        }
    }
    cout << ((zeroes > 0) ? (0) : (count % 2)) << endl;
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