// Problem: Mark Points
// Link to the problem: https://www.codechef.com/problems/MARKP
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
        int count = 0, ans = INT_MAX;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            else
            {
                if (count > 0)
                {
                    if (count < ans)
                    {
                        ans = count;
                    }
                    count = 0;
                }
            }
        }
        if (count > 0)
        {
            if (count < ans)
            {
                ans = count;
            }
            count = 0;
        }
        if (ans == 1 || ans == 2)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
