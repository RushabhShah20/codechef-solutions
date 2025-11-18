// Problem: Chef and Battery
// Link to the problem: https://www.codechef.com/problems/FIFTYPE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while (n != 50)
    {
        if (n > 50)
        {
            n -= 3;
        }
        else
        {
            n += 2;
        }
        ans++;
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