// Problem: Distinct Elements Query
// Link to the problem: https://www.codechef.com/problems/JUNGLEE03
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> suffix(n);
    suffix[n - 1] = 1;
    set<ll> s;
    s.insert(a[n - 1]);
    for (ll i = n - 2; i >= 0; i--)
    {
        if (s.find(a[i]) == s.end())
        {
            suffix[i] = suffix[i + 1] + 1;
            s.insert(a[i]);
        }
        else
        {
            suffix[i] = suffix[i + 1];
        }
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        cout << suffix[x - 1] << endl;
    }
    return 0;
}