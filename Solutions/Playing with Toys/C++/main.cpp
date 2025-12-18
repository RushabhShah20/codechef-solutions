// Problem: Playing with Toys
// Link to the problem: https://www.codechef.com/problems/TOYS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n <= m)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n - m << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}