// Problem: Chef and Spells
// Link to the problem: https://www.codechef.com/problems/CHFSPL
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
        ll a, b, c;
        cin >> a >> b >> c;
        vector<ll> d = {a, b, c};
        sort(d.begin(), d.end());
        cout << d[1] + d[2] << endl;
    }
    return 0;
}