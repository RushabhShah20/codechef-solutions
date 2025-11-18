// Problem: Badminton Serves
// Link to the problem: https://www.codechef.com/problems/BADMINTON
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll p;
    cin >> p;
    if (p % 2 == 0)
    {
        cout << ((p / 2) + 1) << endl;
    }
    else
    {
        cout << ((p + 1) / 2) << endl;
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