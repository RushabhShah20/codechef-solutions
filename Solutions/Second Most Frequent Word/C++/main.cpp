// Problem: Second Most Frequent Word
// Link to the problem: https://www.codechef.com/problems/VISA04
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
        map<string, int> m;
        int maximum = 0, secondMax = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
            m[s[i]]++;
            maximum = max(maximum, m[s[i]]);
        }
        string ans = "-1";
        for (auto i : m)
        {
            if (i.second < maximum && i.second > secondMax)
            {
                secondMax = i.second;
                ans = i.first;
            }
        }
        cout << ans << endl;
    }
    return 0;
}