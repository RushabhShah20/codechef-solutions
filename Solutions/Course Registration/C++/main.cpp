// Problem: Course Registration
// Link to the problem: https://www.codechef.com/problems/COURSEREG
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
        ll n, m, k;
        cin >> n >> m >> k;
        if (n <= m - k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}