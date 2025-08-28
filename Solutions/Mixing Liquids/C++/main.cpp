// Problem: Mixing Liquids
// Link to the problem: https://www.codechef.com/problems/MIXINGLIQ
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
        ll a, b;
        cin >> a >> b;
        cout << (min(a, b / 2)) + 2 * (min(a, b / 2)) << endl;
    }
    return 0;
}