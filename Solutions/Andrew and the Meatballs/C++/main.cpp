// Problem: Andrew and the Meatballs
// Link to the problem: https://www.codechef.com/problems/AMMEAT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<ll>());
    ll ans = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum >= m)
        {
            ans = i + 1;
            break;
        }
    }
    if (ans == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
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