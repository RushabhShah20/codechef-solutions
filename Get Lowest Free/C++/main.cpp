// Problem: Get Lowest Free
// Link to the problem: https://www.codechef.com/problems/SALE
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
        ll sum = 0;
        for (ll i = 0; i < 3; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        cout << sum - *min_element(a.begin(), a.end()) << endl;
    }
    return 0;
}