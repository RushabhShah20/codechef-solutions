// Problem: Qualify the round
// Link to the problem: https://www.codechef.com/problems/QUALIFY
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
        ll x, a, b;
        cin >> x >> a >> b;
        if (a + 2 * b >= x)
        {
            cout << "Qualify" << endl;
        }
        else
        {
            cout << "NotQualify" << endl;
        }
    }
    return 0;
}