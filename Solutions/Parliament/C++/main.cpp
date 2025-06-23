// Problem: Parliament
// Link to the problem: https://www.codechef.com/problems/PARLIAMENT
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
        ll n, x;
        cin >> n >> x;
        if (x * 2 >= n)
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