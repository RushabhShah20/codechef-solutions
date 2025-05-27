// Problem: Is it hot or cold
// Link to the problem: https://www.codechef.com/problems/HOTCOLD
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
        ll c;
        cin >> c;
        if (c > 20)
        {
            cout << "HOT" << endl;
        }
        else
        {
            cout << "COLD" << endl;
        }
    }
    return 0;
}