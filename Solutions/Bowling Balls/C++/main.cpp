// Problem: Bowling Balls
// Link to the problem: https://www.codechef.com/problems/BOWLBALL
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
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= x && a[i] <= y)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}