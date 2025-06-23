// Problem: Best Movie
// Link to the problem: https://www.codechef.com/problems/BESTMOVIE
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
        cin>>n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 7)
            {
                ans.push_back(b[i]);
            }
        }
        if (ans.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {

            cout << *min_element(ans.begin(), ans.end())<<endl;
        }
    }
    return 0;
}