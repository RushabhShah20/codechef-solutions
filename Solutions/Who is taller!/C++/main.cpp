// Problem: Who is taller!
// Link to the problem: https://www.codechef.com/problems/TALLER
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
        ll x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}