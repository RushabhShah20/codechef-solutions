// Problem: Degree of Polynomial
// Link to the problem: https://www.codechef.com/problems/DPOLY
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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (a.back() == 0)
        {
            a.erase(a.end() - 1);
        }
        cout << a.size() - 1 << endl;
    }
    return 0;
}