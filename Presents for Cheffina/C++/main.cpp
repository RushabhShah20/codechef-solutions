// Problem: Presents for Cheffina
// Link to the problem: https://www.codechef.com/problems/PRESENTS
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
        cout << (n - (n / 5)) << endl;
    }
    return 0;
}