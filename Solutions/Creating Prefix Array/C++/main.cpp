// Problem: Creating Prefix Array
// Link to the problem: https://www.codechef.com/problems/PREFPRO1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> ans(n, 0);
    ans[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] + a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}