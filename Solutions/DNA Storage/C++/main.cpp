// Problem: DNA Storage
// Link to the problem: https://www.codechef.com/problems/DNASTORAGE
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
        for (ll i = 0; i < n; i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                cout << "A";
            }
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                cout << "T";
            }
            else if (s[i] == '1' && s[i + 1] == '0')
            {
                cout << "C";
            }
            else
            {
                cout << "G";
            }
        }
        cout << endl;
    }
    return 0;
}