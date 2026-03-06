// Problem: Chef and Steps
// Link to the problem: https://www.codechef.com/problems/CHEFSTEP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string ans;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        if (d % k == 0)
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
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