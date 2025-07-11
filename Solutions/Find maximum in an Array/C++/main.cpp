// Problem: Find maximum in an Array
// Link to the problem: https://www.codechef.com/problems/UWCOI20A
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
        cout << *max_element(a.begin(), a.end()) << endl;
    }

    return 0;
}