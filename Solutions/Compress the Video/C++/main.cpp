// Problem: Compress the Video
// Link to the problem: https://www.codechef.com/problems/COMPRESSVD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    stack<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (st.empty() || x != st.top())
        {
            st.push(x);
        }
    }
    const ll ans = st.size();
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}