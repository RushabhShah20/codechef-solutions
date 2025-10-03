// Problem: Gladiator Fighting
// Link to the problem: https://www.codechef.com/problems/GLADFIGHT
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
        ll x = n - 2, y = (n - 2) * (n - 1) / 2;
        cout << x << " " << y << endl;
    }
    return 0;
}