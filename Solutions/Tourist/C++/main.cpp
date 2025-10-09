// Problem: Tourist
// Link to the problem: https://www.codechef.com/problems/TOURIST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll c, d;
        ll ans = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> c >> d;
            ans = min(ans, abs(c - a) + abs(d - b));
        }
        cout << ans << endl;
    }
    return 0;
}