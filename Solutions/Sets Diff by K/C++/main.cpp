// Problem: Sets Diff by K
// Link to the problem: https://www.codechef.com/problems/SETSK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> b(n), a;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i])
        {
            a.push_back(i + 1);
        }
    }
    for (ll i = 1; i < a.size(); i++)
    {
        if ((a[i] - a[i - 1]) <= k)
        {
            cout << "No" << endl;
            return;
        }
    }
    vector<ll> c(n, 2e18);
    ll d = 2e18;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (b[i])
        {
            d = i;
        }
        c[i] = d;
    }
    d = -2e18;
    for (ll i = 0; i < n; i++)
    {
        if (b[i])
        {
            d = i;
        }
        else
        {
            if (i - d > k && c[i] - i > k)
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
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