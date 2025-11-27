// Problem: Apples and oranges
// Link to the problem: https://www.codechef.com/problems/APPLEORANGE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    cout << gcd(n, m) << endl;
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