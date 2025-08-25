// Problem: Make it Divisible
// Link to the problem: https://www.codechef.com/problems/MAKEDIV3
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
        string s;
        s.append(1, '3');
        if (n - 2 > 0)
        {
            s.append(n - 2, '0');
        }
        if (n - 1 > 0)
        {
            s.append(1, '3');
        }
        cout << s << endl;
    }
    return 0;
}