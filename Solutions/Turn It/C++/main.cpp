// Problem: Turn It
// Link to the problem: https://www.codechef.com/problems/NFS
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
        ll u, v, a, s;
        cin >> u >> v >> a >> s;
        ll x = ((u * u) - (2 * a * s));
        if ((x) > (v * v))
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