// Problem: Alternating Work Days
// Link to the problem: https://www.codechef.com/problems/ALTER
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, p, q;
    cin >> a >> b >> p >> q;
    if (p % a == 0 && q % b == 0)
    {
        if ((((q / b) - (p / a)) == 1) || (((q / b) - (p / a)) == 0) || (((q / b) - (p / a)) == -1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}