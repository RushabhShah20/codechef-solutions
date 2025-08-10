// Problem: Find the Pattern
// Link to the problem: https://www.codechef.com/problems/PATSEARCH
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
        string s, p;
        cin >> s;
        cin >> p;
        if (s.find(p) != s.npos)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}