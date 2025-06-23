// Problem: Chococut
// Link to the problem: https://www.codechef.com/problems/CHOCUT
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
        ll n, m, k;
        cin >> n >> m >> k;
        if (((((n * m) - k) % m) == 0) || (((n * m) - k) % n == 0))
        {
            cout << ((n * m) - k) << endl;
        }
        else
        {
            cout << ((n * m) - k) - (min((((n * m) - k) % m), ((n * m) - k) % n)) << endl;
        }
    }
    return 0;
}