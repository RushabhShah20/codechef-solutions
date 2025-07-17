// Problem: Marble Collector
// Link to the problem: https://www.codechef.com/problems/MARBCOLL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<ll> s(a.begin(), a.end());
        cout << m - s.size() << endl;
    }
    return 0;
}