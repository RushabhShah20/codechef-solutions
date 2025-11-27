// Problem: Ranklist Pages
// Link to the problem: https://www.codechef.com/problems/RANKLISTPAGE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    if (x % 25 == 0)
    {
        cout << (x / 25) << endl;
    }
    else
    {
        cout << ((x / 25) + 1) << endl;
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