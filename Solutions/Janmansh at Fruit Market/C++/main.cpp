// Problem: Janmansh at Fruit Market
// Link to the problem: https://www.codechef.com/problems/JMARKET
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll greatest(ll a, ll b, ll c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
void solve()
{
    ll x, a, b, c;
    cin >> x >> a >> b >> c;
    if (greatest(a, b, c) == a)
    {
        cout << (min(b, c) * (x - 1) + max(b, c)) << endl;
    }
    else if (greatest(a, b, c) == b)
    {
        cout << (min(a, c) * (x - 1) + max(a, c)) << endl;
    }
    else
    {
        cout << (min(b, a) * (x - 1) + max(b, a)) << endl;
    }
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