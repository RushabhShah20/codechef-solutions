// Problem: Erase and Maximize
// Link to the problem: https://www.codechef.com/problems/DICEERMAX
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, s;
    cin >> n >> s;
    if (s <= 5 * n)
    {
        cout << 6 * n << endl;
    }
    else
    {
        cout << 11 * n - s << endl;
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