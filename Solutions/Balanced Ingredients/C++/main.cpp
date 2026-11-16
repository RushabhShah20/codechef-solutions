// Problem: Balanced Ingredients
// Link to the problem: https://www.codechef.com/problems/BAIN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < 4; i++)
    {
        ll x = 0;
        for (ll j = i; j < 4; j++)
        {
            x += a[j];
            if (x == 0)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}