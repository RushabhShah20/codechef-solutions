// Problem: Counting Sort
// Link to the problem: https://www.codechef.com/problems/CNTSORT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), f(100, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i] - 1]++;
    }
    for (ll i = 0; i < 100; i++)
    {
        for (ll j = 0; j < f[i]; j++)
        {
            cout << i + 1 << " ";
        }
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