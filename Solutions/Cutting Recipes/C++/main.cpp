// Problem: Cutting Recipes
// Link to the problem: https://www.codechef.com/problems/RECIPE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll g = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        g = __gcd(g, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] / g << " ";
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