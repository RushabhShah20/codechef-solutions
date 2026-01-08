// Problem: Upward Path
// Link to the problem: https://www.codechef.com/problems/UPPATH
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

const ll inf = 2e9;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a1(n), a2(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> a2[i];
    }
    vector<ll> mn(n), mx(n);
    for (ll i = 0; i < n; i++)
    {
        mn[i] = min(a1[i], a2[i]);
        mx[i] = max(a1[i], a2[i]);
    }
    vector<ll> p(n), s(n);
    p[0] = mn[0];
    for (ll i = 1; i < n; i++)
    {
        if (mn[i] >= p[i - 1])
        {
            p[i] = mn[i];
        }
        else if (mx[i] >= p[i - 1])
        {
            p[i] = mx[i];
        }
        else
        {
            p[i] = inf;
        }
    }
    s[n - 1] = mx[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        if (mx[i] <= s[i + 1])
        {
            s[i] = mx[i];
        }
        else if (mn[i] <= s[i + 1])
        {
            s[i] = mn[i];
        }
        else
        {
            s[i] = -1;
        }
    }
    bool z = false;
    for (int i = 0; i < n; i++)
    {
        bool x = i == 0 ? true : p[i - 1] <= mn[i];
        bool y = i == n - 1 ? true : mx[i] <= s[i + 1];
        if (x == true && y == true)
        {
            z = true;
            break;
        }
    }
    if (z == true)
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