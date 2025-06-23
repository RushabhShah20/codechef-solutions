// Problem: Get Subscription
// Link to the problem: https://www.codechef.com/problems/SUBSCRIBE
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
        ll x;
        cin >> x;
        if (x <= 30)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}