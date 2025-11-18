// Problem: Peaceful Party
// Link to the problem: https://www.codechef.com/problems/MAYOR_PARTY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll pa, pb, pc;
    cin >> pa >> pb >> pc;
    cout << max(pb, pa + pc) << endl;
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