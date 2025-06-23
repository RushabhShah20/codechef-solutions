// Problem: Second Largest
// Link to the problem: https://www.codechef.com/problems/FLOW017
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
        for (ll i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }
        a.erase(max_element(a.begin(), a.end()));
        cout << *max_element(a.begin(), a.end()) << endl;
    }
    return 0;
}