// Problem: Finding All
// Link to the problem: https://www.codechef.com/problems/FINDALL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            a++;
        }
        else if (x == -1)
        {
            b++;
        }
    }
    const ll k = min(1LL, (a > 0 ? -1 : 0) + b), j = max(-1LL, (b > 0 ? 1 : 0) - a);
    for (ll i = j; i <= k; i++)
    {
        cout << i << " ";
    }
    cout << endl;
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