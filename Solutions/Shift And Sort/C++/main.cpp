// Problem: Shift And Sort
// Link to the problem: https://www.codechef.com/problems/SHFSRT
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
        cin >> a[i];
    }
    vector<bool> b(n, false);
    vector<ll> c;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            b[i] = true;
            c.push_back(i);
        }
    }
    for (ll i = 0; i + 1 < c.size(); i++)
    {
        if (c[i + 1] == c[i] + 1)
        {
            cout << "No" << endl;
            return;
        }
    }
    ll x = LLONG_MIN, i = 0;
    while (i < n)
    {
        if (b[i])
        {
            const ll y = a[i] - a[i + 1];
            ll z = (y + 1) / 2;
            if (z < 1)
            {
                z = 1;
            }
            const ll p = a[i] - z, q = a[i + 1] + z;
            if (p < x)
            {
                cout << "No" << endl;
                return;
            }
            x = q;
            i += 2;
        }
        else
        {
            if (a[i] < x)
            {
                cout << "No" << endl;
                return;
            }
            x = a[i];
            i++;
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