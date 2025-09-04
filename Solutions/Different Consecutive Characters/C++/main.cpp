// Problem: Different Consecutive Characters
// Link to the problem: https://www.codechef.com/problems/DIFFCONSEC
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
        if (s.size() == 1)
        {
            cout << 0 << endl;
        }
        else if (s.size() == 2)
        {
            if (s.front() == s.back())
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            ll ans = 0;
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == s[i - 1])
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}