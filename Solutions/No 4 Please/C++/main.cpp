// Problem: No 4 Please
// Link to the problem: https://www.codechef.com/problems/NO4S
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll count1 = 0, count2 = 0, count3 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            count1++;
        }
        else if (a[i] == 2)
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    ll ans = min(count1, count3) + ((count2 == 0) ? (count2) : (count2 - 1));
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