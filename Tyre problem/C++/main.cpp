// Problem: Tyre problem
// Link to the problem: https://www.codechef.com/problems/TYRE
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
        ll n, m;
        cin >> n >> m;
        cout << ((n * 2) + (m * 4)) << endl;
    }
    return 0;
}