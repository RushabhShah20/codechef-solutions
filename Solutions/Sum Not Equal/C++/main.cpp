// Problem: Sum Not Equal
// Link to the problem: https://www.codechef.com/problems/NOTSUM
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
    ll x = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            x = i;
            break;
        }
    }
    if (x == -1)
    {
        cout << -1 << endl;
        return;
    }
    ll i, j, k;
    if (x == 0)
    {
        i = 1;
        j = 2;
        k = 3;
    }
    else if (x == 1)
    {
        i = 2;
        j = 1;
        k = 3;
    }
    else
    {
        i = x + 1;
        j = 1;
        k = 2;
    }
    if (a[i - 1] + a[j - 1] != a[k - 1])
    {
        cout << i << " " << j << " " << k << endl;
    }
    else if (a[i - 1] + a[k - 1] != a[j - 1])
    {
        cout << i << " " << k << " " << j << endl;
    }
    else
    {
        cout << j << " " << k << " " << i << endl;
    }
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