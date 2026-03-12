// Problem: All Zero
// Link to the problem: https://www.codechef.com/problems/ALLZR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (c % 3 != 0)
    {
        cout << "No" << endl;
        return;
    }
    b -= (c / 3);
    if (b <= 0)
    {
        cout << "No" << endl;
    }
    else
    {
        if (2 * a == b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
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