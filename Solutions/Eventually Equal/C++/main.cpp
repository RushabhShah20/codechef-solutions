// Problem: Eventually Equal
// Link to the problem: https://www.codechef.com/problems/EQMNG
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    const ll p = __gcd(a, c), q = __gcd(b, c);
    if (p == q)
    {
        cout << 1 << endl;
        return;
    }
    c++;
    a = __gcd(a, c);
    b = __gcd(b, c);
    if (a == b)
    {
        cout << 2 << endl;
        return;
    }
    cout << 3 << endl;
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