// Problem: Sasta Shark Tank
// Link to the problem: https://www.codechef.com/problems/SST
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
        if (a * 10 > b * 5)
        {
            cout << "FIRST" << endl;
        }
        else if (a * 10 < b * 5)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}