// Problem: Previous smaller element
// Link to the problem: https://www.codechef.com/problems/PREP60
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
    stack<ll> st;
    vector<ll> ans(n, -1);
    for (ll i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            ans[i] = a[st.top()];
        }
        st.push(i);
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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