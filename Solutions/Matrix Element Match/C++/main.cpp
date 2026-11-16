// Problem: Matrix Element Match
// Link to the problem: https://www.codechef.com/problems/MAELM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    map<ll, ll> k;
    for (ll i = 0; i < n * n; i++)
    {
        ll x;
        cin >> x;
        k[x]++;
    }
    for (ll j = 0; j < m * m; j++)
    {
        ll x;
        cin >> x;
        k[x]--;
    }
    for (const pair<ll, ll> i : k)
    {
        if (i.second < 0)
        {
            cout << "FALSE" << endl;
            return;
        }
    }
    cout << "TRUE" << endl;
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