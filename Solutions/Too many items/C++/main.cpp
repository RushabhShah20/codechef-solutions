// Problem: Too many items
// Link to the problem: https://www.codechef.com/problems/POLYBAGS
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
        cout << ((n % 10 == 0) ? (n / 10) : ((n / 10) + 1)) << endl;
    }
    return 0;
}