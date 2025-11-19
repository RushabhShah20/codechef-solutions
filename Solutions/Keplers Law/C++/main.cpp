// Problem: Keplers Law
// Link to the problem: https://www.codechef.com/problems/KEPLERSLAW
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll t1, t2, r1, r2;
    cin >> t1 >> t2 >> r1 >> r2;
    if (t1 * t1 * r2 * r2 * r2 == t2 * t2 * r1 * r1 * r1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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