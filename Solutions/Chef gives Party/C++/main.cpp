// Problem: Chef gives Party
// Link to the problem: https://www.codechef.com/problems/PARTY2
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
        ll n, x, k;
        cin >> n >> x >> k;
        if (k >= n * x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}