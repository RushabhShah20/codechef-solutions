// Problem: New Piece
// Link to the problem: https://www.codechef.com/problems/NEWPIECE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, p, q;
    cin >> a >> b >> p >> q;
    if (a == p && b == q)
    {
        cout << 0 << endl;
    }
    else
    {
        if ((a + b) % 2 == (p + q) % 2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
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