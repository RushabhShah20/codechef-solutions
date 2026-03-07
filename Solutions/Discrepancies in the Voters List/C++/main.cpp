// Problem: Discrepancies in the Voters List
// Link to the problem: https://www.codechef.com/problems/VOTERS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    map<ll, ll> m;
    for (ll i = 0; i < n1; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    for (ll i = 0; i < n2; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    for (ll i = 0; i < n3; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    vector<ll> ans;
    for (const pair<ll, ll> i : m)
    {
        if (i.second > 1)
        {
            ans.push_back(i.first);
        }
    }
    const ll n = ans.size();
    cout << n << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
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