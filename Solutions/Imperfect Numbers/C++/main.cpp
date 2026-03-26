// Problem: Imperfect Numbers
// Link to the problem: https://www.codechef.com/problems/NO25PLS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if ((n % 2 == 0 && n % 5 != 0) || (n % 2 != 0 && n % 5 == 0))
    {
        cout << 0 << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            if (n % 5 == 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
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