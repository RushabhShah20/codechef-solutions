// Problem: Change One
// Link to the problem: https://www.codechef.com/problems/CHANGEONE7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = LLONG_MAX, b = LLONG_MAX, x = LLONG_MIN, y = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (a > z)
        {
            b = a;
            a = z;
        }
        else if (b > z)
        {
            b = z;
        }
        if (x < z)
        {
            y = x;
            x = z;
        }
        else if (y < z)
        {
            y = z;
        }
    }
    const ll ans = min(x - b, y - a);
    cout << ans << endl;
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