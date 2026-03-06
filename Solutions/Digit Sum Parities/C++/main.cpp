// Problem: Digit Sum Parities
// Link to the problem: https://www.codechef.com/problems/DIGSMPAR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll sum(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += (n % 10);
        n /= 10;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    if ((sum(n) % 2) != (sum(n + 1) % 2))
    {
        cout << n + 1 << endl;
    }
    else
    {
        cout << n + 2 << endl;
    }
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