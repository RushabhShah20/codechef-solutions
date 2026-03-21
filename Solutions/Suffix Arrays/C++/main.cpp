// Problem: Suffix Arrays
// Link to the problem: https://www.codechef.com/problems/PREFPRO5
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), p(n), s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    p[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        p[i] = __gcd(p[i - 1], a[i]);
    }
    s[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        s[i] = __gcd(s[i + 1], a[i]);
    }
    ll ans = 0;
    ans = max(ans, s[1]);
    for (ll i = 1; i < n - 1; i++)
    {
        ans = max(ans, __gcd(p[i - 1], s[i + 1]));
    }
    ans = max(ans, p[n - 2]);
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