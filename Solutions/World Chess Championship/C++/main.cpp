// Problem: World Chess Championship
// Link to the problem: https://www.codechef.com/problems/WCC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    string s;
    cin >> s;
    ll c = 0, d = 0;
    for (char ch : s)
    {
        if (ch == 'C')
        {
            c += 2;
        }
        else if (ch == 'N')
        {
            d += 2;
        }
        else
        {
            c++;
            d++;
        }
    }
    ll ans = 0;
    if (c > d)
    {
        ans = 60 * x;
    }
    else if (c < d)
    {
        ans = 40 * x;
    }
    else
    {
        ans = 55 * x;
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