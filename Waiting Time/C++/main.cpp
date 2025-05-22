// Problem: Waiting Time
// Link to the problem: https://www.codechef.com/problems/WAITTIME
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
        ll k, x;
        cin >> k >> x;
        cout << ((7 * k) - x) << endl;
    }
    return 0;
}