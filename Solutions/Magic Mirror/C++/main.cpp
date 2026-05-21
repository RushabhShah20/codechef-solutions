// Problem: Magic Mirror
// Link to the problem: https://www.codechef.com/problems/MIRRIM
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
    bool x = true;
    for (ll i = 0; i < n / 2; i++)
    {
        if (a[i] + a[n - i - 1] != a[0] + a[n - 1])
        {
            x = false;
            break;
        }
    }
    const string ans = x ? "Yes" : "No";
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