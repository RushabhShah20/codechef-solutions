// Problem: Facebook
// Link to the problem: https://www.codechef.com/problems/FACEBOOK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll maxLikes = *max_element(a.begin(), a.end());
    ll ans = 0, maxComments = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == maxLikes)
        {
            maxComments = max(maxComments, b[i]);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == maxLikes && b[i] == maxComments)
        {
            ans = i + 1;
            break;
        }
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