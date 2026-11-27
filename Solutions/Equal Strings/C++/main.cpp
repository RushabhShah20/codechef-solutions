// Problem: Equal Strings
// Link to the problem: https://www.codechef.com/problems/EQUALSTRING
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (b[j] - 'a' == i && a[j] != b[j])
            {
                ans++;
                break;
            }
        }
    }
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