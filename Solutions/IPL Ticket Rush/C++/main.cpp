// Problem: IPL Ticket Rush
// Link to the problem: https://www.codechef.com/problems/IPLTRSH
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
        if (n <= m)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n - m << endl;
        }
    }
    return 0;
}