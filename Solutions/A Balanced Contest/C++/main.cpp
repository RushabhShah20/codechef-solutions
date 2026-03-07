// Problem: A Balanced Contest
// Link to the problem: https://www.codechef.com/problems/PERFCONT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, p, x = 0, y = 0;
    cin >> n >> p;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z >= p / 2)
        {
            x++;
        }
        if (z <= p / 10)
        {
            y++;
        }
    }
    if (x == 1 && y == 2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
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