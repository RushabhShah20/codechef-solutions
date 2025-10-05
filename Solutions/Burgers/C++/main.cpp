// Problem: Burgers
// Link to the problem: https://www.codechef.com/problems/BURGERS
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
        cout << min(a, b) << endl;
    }
    return 0;
}