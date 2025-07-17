// Problem: Failing Grades
// Link to the problem: https://www.codechef.com/problems/FAIL
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
        ll sum = 0;
        bool x = true;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (sum < (40 * (i + 1)))
            {
                x = false;
            }
        }
        if (x == false)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}