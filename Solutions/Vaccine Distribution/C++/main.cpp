// Problem: Vaccine Distribution
// Link to the problem: https://www.codechef.com/problems/VACCINE2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, d, x = 0, y = 0;
    cin >> n >> d;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z <= 9 || z >= 80)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    const ll ans = ((x + d - 1) / (d)) + ((y + d - 1) / (d));
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