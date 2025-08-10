// Problem: Form a Triangle
// Link to the problem: https://www.codechef.com/problems/PHONEPE01
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
        sort(a.begin(), a.end());
        bool x = false;
        for (ll i = 1; i < n - 1; i++)
        {
            if (a[i - 1] + a[i] > a[i + 1])
            {
                x = true;
                break;
            }
        }
        if (x == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}