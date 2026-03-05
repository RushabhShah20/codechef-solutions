// Problem: Airline Restrictions
// Link to the problem: https://www.codechef.com/problems/AIRLINE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (((a + b <= d) && (c <= e)) || ((b + c <= d) && (a <= e)) || ((a + c <= d) && (b <= e)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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