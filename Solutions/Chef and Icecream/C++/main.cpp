// Problem: Chef and Icecream
// Link to the problem: https://www.codechef.com/problems/CHFICRM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 15)
        {
            if (y == 0)
            {
                if (x <= 1)
                {
                    cout << "NO" << endl;
                    return;
                }
                x -= 2;
            }
            else
            {
                y--;
            }
        }
        else if (a[i] == 10)
        {
            if (x == 0)
            {
                cout << "NO" << endl;
                return;
            }
            y++;
            x--;
        }
        else
        {
            x++;
        }
    }
    cout << "YES" << endl;
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