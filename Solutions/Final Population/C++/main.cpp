// Problem: Final Population
// Link to the problem: https://www.codechef.com/problems/POPULATION
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
        ll x, y, z;
        cin >> x >> y >> z;
        cout << x - y + z << endl;
    }
    return 0;
}