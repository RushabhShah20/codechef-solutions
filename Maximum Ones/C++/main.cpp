// Problem: Maximum Ones
// Link to the problem: https://www.codechef.com/START180D/problems/MXON
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll count_0 = 0, count_1 = 0;
        ll last_pos_of_one = -1;
        for (ll i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                last_pos_of_one = i;
                break;
            }
        }
        for (ll i = 0; i < last_pos_of_one; i++)
        {
            if (s[i] == '0')
            {
                count_0++;
            }
        }
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count_1++;
            }
        }
        if (last_pos_of_one <= 0)
        {
            cout << count_1 << endl;
        }
        else
        {
            if (count_0 <= k)
            {
                cout << count_1 + count_0 << endl;
            }
            else
            {
                cout << count_1 + k << endl;
            }
        }
    }
    return 0;
}