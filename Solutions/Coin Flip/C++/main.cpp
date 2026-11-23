// Problem: Coin Flip
// Link to the problem: https://www.codechef.com/problems/COIFL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    a[1] = 1;
    a[2] = 2;
    for (ll i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    const ll ans = a[n];
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}