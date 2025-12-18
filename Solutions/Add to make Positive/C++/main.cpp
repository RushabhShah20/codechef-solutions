// Problem: Add to make Positive
// Link to the problem: https://www.codechef.com/problems/ADDPOS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum >= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (sum % n == 0)
        {
            cout << (-1 * (sum / n)) << endl;
        }
        else
        {
            cout << ((-1 * (sum / n)) + 1) << endl;
        }
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