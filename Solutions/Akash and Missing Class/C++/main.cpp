// Problem: Akash and Missing Class
// Link to the problem: https://www.codechef.com/problems/CHFCLASS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 7 == 6)
    {
        cout << ((n / 7) + 1) << endl;
    }
    else
    {
        cout << (n / 7) << endl;
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