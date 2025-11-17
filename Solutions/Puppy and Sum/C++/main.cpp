// Problem: Puppy and Sum
// Link to the problem: https://www.codechef.com/problems/PPSUM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll d, n;
    cin >> d >> n;
    ll ans = 0;
    for (ll i = 0; i < d; i++)
    {
        ans = (n * (n + 1)) / 2;
        n = ans;
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