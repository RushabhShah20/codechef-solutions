// Problem: Equal Distinct
// Link to the problem: https://www.codechef.com/problems/EQDIS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x - 1]++;
    }
    const ll y = *max_element(a.begin(), a.end());
    if (n % 2 != 0 && y == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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