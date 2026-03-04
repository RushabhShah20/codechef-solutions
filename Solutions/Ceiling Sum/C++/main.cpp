// Problem: Ceiling Sum
// Link to the problem: https://www.codechef.com/problems/CEILSUM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a < b)
    {
        cout << ((b - a) / 2) + 1 << endl;
    }
    else if (a > b)
    {
        if ((a - b) % 2 == 0)
        {
            cout << ((b - a) / 2) + 1 << endl;
        }
        else
        {
            cout << ((b - a) / 2) << endl;
        }
    }
    else
    {
        cout << 0 << endl;
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