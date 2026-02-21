// Problem: Chef and squares
// Link to the problem: https://www.codechef.com/problems/CHSQR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << (((n + 1) / 2 + i + j) % n) + 1 << " ";
        }
        cout << endl;
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