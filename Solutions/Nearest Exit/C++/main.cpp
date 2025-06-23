// Problem: Nearest Exit
// Link to the problem: https://www.codechef.com/problems/NEARESTEXIT
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
        ll x;
        cin >> x;
        if (x <= 50)
        {
            cout << "LEFT" << endl;
        }
        else
        {
            cout << "RIGHT" << endl;
        }
    }
    return 0;
}