// Problem: WA Test Cases
// Link to the problem: https://www.codechef.com/problems/WATESTCASES
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
    string s;
    cin >> s;
    vector<ll> b;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            b.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end());
    const ll ans = b[0];
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