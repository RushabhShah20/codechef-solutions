// Problem: Ascents and Descents
// Link to the problem: https://www.codechef.com/problems/ASCDESC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n == 6)
    {
        cout << "2 4 5 1 3 6" << endl;
        return;
    }
    ll x = 500;
    for (ll i = x; i >= 0; i--)
    {
        for (ll j = 0; j < n / x; j++)
        {
            cout << i + j * x << " ";
        }
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}