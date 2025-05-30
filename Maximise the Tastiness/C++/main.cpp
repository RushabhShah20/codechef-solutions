// Problem: Maximise the Tastiness
// Link to the problem: https://www.codechef.com/problems/MAXTASTE
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << max(a, b) + max(c, d) << endl;
    }
    return 0;
}