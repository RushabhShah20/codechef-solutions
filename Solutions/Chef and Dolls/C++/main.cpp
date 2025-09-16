// Problem: Chef and Dolls
// Link to the problem: https://www.codechef.com/problems/MISSP
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (auto i : m)
        {
            if (i.second % 2 != 0)
            {
                cout << i.first << endl;
                break;
            }
        }
    }
    return 0;
}