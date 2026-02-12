// Problem: Plus-Minus Split
// Link to the problem: https://www.codechef.com/problems/PSAS
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
    bool w = true;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            w = false;
            break;
        }
    }
    if (w)
    {
        cout << "Yes" << endl;
        return;
    }
    for (ll k = 1; k < n; k++)
    {
        const ll x = a[0], y = a[k];
        if (x == -y)
        {
            bool z = true;
            for (ll i = 0; i < k; i++)
            {
                if (a[i] != x)
                {
                    z = false;
                }
            }
            for (ll i = k; i < n; i++)
            {
                if (a[i] != y)
                {
                    z = false;
                }
            }
            if (z)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
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