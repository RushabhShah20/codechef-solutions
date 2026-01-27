// Problem: Sort Matrix Diagonally
// Link to the problem: https://www.codechef.com/problems/MATSORTDIAG
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    unordered_map<ll, priority_queue<ll, vector<ll>, greater<ll>>> ans;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            ans[i - j].push(x);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << ans[i - j].top() << " ";
            ans[i - j].pop();
        }
        cout << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}