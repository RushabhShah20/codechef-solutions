// Problem: Recent contest problems
// Link to the problem: https://www.codechef.com/problems/RECENTCONT
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
        vector<string> s(n);
        ll a = 0, b = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == "START38")
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}