// Problem: Am I Lucky!
// Link to the problem: https://www.codechef.com/problems/SPCP4
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, k;
    cin >> n >> x >> k;
    ll a = (x % k), b = ((n - x) % k);
    ll c = min(a, b);
    a -= c;
    b -= c;
    cout << max(a, b) << endl;
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