// Problem: Chef and Card Game
// Link to the problem: https://www.codechef.com/problems/CRDGAME
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll sum(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += (n % 10);
        n /= 10;
    }
    return ans;
}

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (sum(a) > sum(b))
        {
            x++;
        }
        else if (sum(a) < sum(b))
        {
            y++;
        }
        else
        {
            x++;
            y++;
        }
    }
    if (x > y)
    {
        cout << 0 << " " << x << endl;
    }
    else if (x < y)
    {
        cout << 1 << " " << y << endl;
    }
    else
    {
        cout << 2 << " " << x << endl;
    }
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