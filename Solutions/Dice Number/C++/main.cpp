// Problem: Dice Number
// Link to the problem: https://www.codechef.com/problems/DICENUM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(3), b(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end(), greater<>());
    ll x = 100 * a[0] + 10 * a[1] + a[2], y = 100 * b[0] + 10 * b[1] + b[2];
    const string ans = x > y ? "Alice" : (x < y ? "Bob" : "Tie");
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