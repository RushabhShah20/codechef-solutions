// Problem: Attack on Kingdom
// Link to the problem: https://www.codechef.com/problems/KNGATK
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        a.erase(min_element(a.begin(), a.end()));
        cout << *min_element(a.begin(), a.end()) << endl;
    }
    return 0;
}