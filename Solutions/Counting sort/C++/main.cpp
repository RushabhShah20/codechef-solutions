// Problem: Counting sort
// Link to the problem: https://www.codechef.com/problems/DSCPPAS265
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    vector<pair<ll, ll>> v;
    for (pair<ll, ll> i : m)
    {
        v.push_back(i);
    }
    sort(v.begin(), v.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         { if (a.second == b.second) {return a.first<b.first;} else {return a.second<b.second;} });
    for (ll i = 0; i < v.size(); i++)
    {
        for (ll j = 0; j < v[i].second; j++)
        {
            cout << v[i].first << " ";
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