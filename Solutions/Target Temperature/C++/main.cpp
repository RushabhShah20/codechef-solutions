// Problem: Target Temperature
// Link to the problem: https://www.codechef.com/problems/RESETZ
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, mx = LLONG_MIN;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    if (mx == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    sort(a.begin(), a.end());
    bool x = true;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1] && a[i] != mx)
        {
            x = false;
            break;
        }
    }
    if (x)
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