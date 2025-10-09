// Problem: Make Subarray
// Link to the problem: https://www.codechef.com/problems/MAKESUB
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
        ll ans = 0;
        int left = s.find_first_of('1'), right = s.find_last_of('1');
        for (ll i = left; i <= right; i++)
        {
            if (s[i] == '0')
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}