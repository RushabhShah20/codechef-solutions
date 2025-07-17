// Problem: Chef Bakes Cake 3
// Link to the problem: https://www.codechef.com/problems/BAKECAKE3
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
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    b[i] += (a[j] * 50);
                }
                else
                {
                    b[i] += (a[i] * 50);
                }
            }
        }
        vector<ll> c(n);
        for (int i = 0; i < c.size(); i++)
        {
            c[i] = a[i] * n * 30;
        }
        vector<ll> d(n);
        for (int i = 0; i < n; i++)
        {
            d[i] = b[i] - c[i];
        }
        cout << *max_element(d.begin(), d.end()) << endl;
    }
    return 0;
}