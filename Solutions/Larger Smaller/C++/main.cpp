// Problem: Larger Smaller
// Link to the problem: https://www.codechef.com/problems/LARGSMALL
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
        int min = *min_element(a.begin(), a.end());
        int max = *max_element(a.begin(), a.end());
        if (max - min <= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << max - min - 1 << endl;
        }
    }
    return 0;
}