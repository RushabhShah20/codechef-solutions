// Problem: Ones and Zeroes II
// Link to the problem: https://www.codechef.com/problems/OZ
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> ones;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones.push_back(i + 1);
        }
    }
    ll k = ones.size();
    ll max = min(n, 2 * k);
    ll count = (max + 1) / 2;
    ll min = 0;
    for (ll j = 1; j <= count; j++)
    {
        ll pos = ones[j - 1];
        ll limit = 2 * j - 1;
        if (pos > limit)
        {
            min += (pos - limit);
        }
    }
    cout << max << " " << min << endl;
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