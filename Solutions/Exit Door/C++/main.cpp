// Problem: Exit Door
// Link to the problem: https://www.codechef.com/problems/P3BAR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    deque<ll> b(a.begin(), a.end());
    ll ans = 0;
    ll x = n;
    while (!b.empty())
    {
        if (b.front() == x)
        {
            b.pop_front();
        }
        else if (b.back() == x)
        {
            b.pop_back();
        }
        else
        {
            auto z = find(b.begin(), b.end(), x);
            int y = z - b.begin();
            b.erase(z);
            ans += min(y, (int)(b.size() - y));
        }
        x--;
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}