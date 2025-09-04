// Problem: Two Dishes
// Link to the problem: https://www.codechef.com/problems/TWODISH
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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        if (a + c < n)
        {
            cout << "NO" << endl;
        }
        else if (b < n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}