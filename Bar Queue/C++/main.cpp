// Problem: Bar Queue
// Link to the problem: https://www.codechef.com/problems/QBGI
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
        cin >> s;
        ll girls = 0, boys = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                boys++;
            }
            else if (s[i] == 'G')
            {
                girls++;
            }
            if (boys > 2 * girls)
            {
                break;
            }
        }
        cout << girls + boys << endl;
    }
    return 0;
}