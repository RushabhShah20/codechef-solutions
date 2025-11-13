// Problem: Binary Flip
// Link to the problem: https://www.codechef.com/problems/P4BAR
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll count00 = 0, count11 = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '0')
            count00++;
        if (s[i] == '1' && s[i + 1] == '1')
            count11++;
    }

    if (count11 >= count00)
    {
        cout << 0 << endl;
        return;
    }
    vector<ll> gain(n);
    for (ll i = 0; i < n; i++)
    {
        ll g = 0;
        if (s[i] == '0')
        {
            if (i > 0)
            {
                if (s[i - 1] == '0')
                    g++;
                else
                    g++;
            }
            if (i < n - 1)
            {
                if (s[i + 1] == '0')
                    g++;
                else
                    g++;
            }
        }
        else
        {
            if (i > 0)
            {
                if (s[i - 1] == '1')
                    g--;
                else
                    g--;
            }
            if (i < n - 1)
            {
                if (s[i + 1] == '1')
                    g--;
                else
                    g--;
            }
        }
        gain[i] = g;
    }
    sort(gain.begin(), gain.end(), greater<ll>());
    ll ans = 0;
    ll diff = count00 - count11;
    for (ll i = 0; i < n && diff > 0; i++)
    {
        if (gain[i] > 0)
        {
            diff -= gain[i];
            ans++;
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