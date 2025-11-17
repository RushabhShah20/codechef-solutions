// Problem: Divisible by 3
// Link to the problem: https://www.codechef.com/problems/MODULO3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a % 3 == 0 || b % 3 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (abs(a - b) % 3 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
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