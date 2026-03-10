// Problem: Usain Bolt vs Tiger
// Link to the problem: https://www.codechef.com/problems/USANBOLT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll s, x, a, v;
    cin >> s >> x >> a >> v;
    const long double t1 = ((long double)s / (long double)v), t2 = sqrtl((long double)(2 * (s + x)) / (long double)a);
    if (t1 < t2)
    {
        cout << "Bolt" << endl;
    }
    else
    {
        cout << "Tiger" << endl;
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