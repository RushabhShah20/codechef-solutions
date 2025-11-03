// Problem: Indivisible Permutation
// Link to the problem: https://www.codechef.com/problems/INDIPERM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    cout << 1 << endl;
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