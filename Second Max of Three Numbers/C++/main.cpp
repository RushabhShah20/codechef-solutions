// Problem: Second Max of Three Numbers
// Link to the problem: https://www.codechef.com/problems/SNDMAX
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
        vector<ll> a(3);
        for (ll i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        a.erase(min_element(a.begin(), a.end()));
        cout << *min_element(a.begin(), a.end()) << endl;
    }
    return 0;
}