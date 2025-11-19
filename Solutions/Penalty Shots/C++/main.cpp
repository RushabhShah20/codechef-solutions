// Problem: Penalty Shots
// Link to the problem: https://www.codechef.com/problems/PENALTY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(10);
    for (ll i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    ll count = 0;
    for (ll i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] == 1)
            {
                count++;
            }
        }
        else
        {
            if (a[i] == 1)
            {
                count--;
            }
        }
    }
    if (count > 0)
    {
        cout << 1 << endl;
    }
    else if (count < 0)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 0 << endl;
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