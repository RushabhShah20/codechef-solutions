// Problem: Element Frequency
// Link to the problem: https://www.codechef.com/problems/JUNGLEE07
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
        vector<ll> a(n), freq(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        for (ll i = 0; i < n; i++)
        {
            cout << freq[i] << " ";
        }
        cout << endl;
    }
    return 0;
}