// Problem: Online or Offline
// Link to the problem: https://www.codechef.com/problems/FOODPLAN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n * 9 > m * 10)
    {
        cout << "DINING" << endl;
    }
    else if (n * 9 < m * 10)
    {
        cout << "ONLINE" << endl;
    }
    else
    {
        cout << "EITHER" << endl;
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