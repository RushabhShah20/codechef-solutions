// Problem: Motivation
// Link to the problem: https://www.codechef.com/problems/IMDB
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
        ll n, x;
        cin >> n >> x;
        vector<ll> s(n), r(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i] >> r[i];
            if (s[i] <= x)
            {
                ans = max(ans, r[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}