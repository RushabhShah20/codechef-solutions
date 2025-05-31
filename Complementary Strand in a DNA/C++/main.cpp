// Problem: Complementary Strand in a DNA
// Link to the problem: https://www.codechef.com/problems/DNASTRAND
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
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                s[i] = 'T';
            }
            else if (s[i] == 'T')
            {
                s[i] = 'A';
            }
            else if (s[i] == 'C')
            {
                s[i] = 'G';
            }
            else if (s[i] == 'G')
            {
                s[i] = 'C';
            }
        }
        cout << s << endl;
    }
    return 0;
}