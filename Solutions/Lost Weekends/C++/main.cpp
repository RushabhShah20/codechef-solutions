// Problem: Lost Weekends
// Link to the problem: https://www.codechef.com/problems/LOSTWKND
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(5);
    for (ll i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    ll x;
    cin >> x;
    ll y = 0;
    for (ll i = 0; i < 5; i++)
    {
        y += x * a[i];
    }
    const string ans = y > 120 ? "Yes" : "No";
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