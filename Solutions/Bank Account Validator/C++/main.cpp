// Problem: Bank Account Validator
// Link to the problem: https://www.codechef.com/problems/BACVA
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0;
    while (n > 0)
    {
        x += n % 10;
        n /= 10;
    }
    const string ans = x % 10 == 0 ? "Valid" : "Invalid";
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