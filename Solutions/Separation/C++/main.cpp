// Problem: Separation
// Link to the problem: https://www.codechef.com/problems/SEPX
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (x <= a.front() || x >= a.back())
    {
        cout << "Yes" << endl;
    }
    else if (find(a.begin(), a.end(), x) != a.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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