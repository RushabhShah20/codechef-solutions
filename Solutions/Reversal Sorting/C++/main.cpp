// Problem: Reversal Sorting
// Link to the problem: https://www.codechef.com/problems/REVSORT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
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
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (y > a[i] && y + a[i] > x)
        {
            cout << "NO" << endl;
            return;
        }
        y = max(y, a[i]);
    }
    cout << "YES" << endl;
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