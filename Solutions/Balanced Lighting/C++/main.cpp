// Problem: Balanced Lighting
// Link to the problem: https://www.codechef.com/problems/RBLT
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
        vector<int> c(n);
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
            m[c[i]]++;
        }
        if (m[1] == m[2] && m[0] % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else if (m[1] == m[2] && m[0] % 2 != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            if (abs(m[1] - m[2]) <= m[0])
            {
                if ((m[0] - abs(m[1] - m[2])) % 2 == 0)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}