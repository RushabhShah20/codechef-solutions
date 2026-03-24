// Problem: Chef And Salary Pay
// Link to the problem: https://www.codechef.com/problems/HCAGMAM1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, a = 0, b = 0, c = 0;
    cin >> x >> y;
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a++;
            c++;
        }
        else
        {
            c = 0;
        }
        b = max(b, c);
    }
    const ll ans = x * a + y * b;
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