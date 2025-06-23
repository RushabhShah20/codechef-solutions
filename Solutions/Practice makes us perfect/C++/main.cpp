// Problem: Practice makes us perfect
// Link to the problem: https://www.codechef.com/problems/PRACTICEPERF
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    vector<ll> p(4);
    ll ans = 0;
    for (ll i = 0; i < p.size(); i++)
    {
        cin >> p[i];
        if (p[i] >= 10)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}