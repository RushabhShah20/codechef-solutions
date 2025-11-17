// Problem: GCD and LCM
// Link to the problem: https://www.codechef.com/problems/FLOW016
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
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << ((a * b) / gcd(a, b)) << endl;
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