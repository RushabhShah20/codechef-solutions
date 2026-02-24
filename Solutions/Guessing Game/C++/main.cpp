// Problem: Guessing Game
// Link to the problem: https://www.codechef.com/problems/GUESS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a, b, c, d;
    if (n % 2 == 0)
    {
        a = b = n / 2;
    }
    else
    {
        a = (n + 1) / 2;
        b = n / 2;
    }
    if (m % 2 == 0)
    {
        c = d = m / 2;
    }
    else
    {
        c = (m + 1) / 2;
        d = m / 2;
    }
    ll e = a * d + b * c;
    if (e == 0)
    {
        cout << "0/1" << endl;
    }
    else
    {
        const ll g = __gcd(e, m * n), f = (m * n) / g;
        e /= g;
        cout << e << "/" << f << endl;
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