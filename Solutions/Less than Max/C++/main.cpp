// Problem: Less than Max
// Link to the problem: https://www.codechef.com/problems/LEQMAX
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
    unordered_set<ll> s;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            ans++;
            s.insert(1);
        }
        else
        {
            if (s.count(a[i] - 1))
            {
                ans++;
                s.insert(a[i]);
            }
        }
    }
    cout << ans << endl;
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