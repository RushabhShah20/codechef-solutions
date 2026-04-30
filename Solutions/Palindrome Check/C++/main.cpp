// Problem: Palindrome Check
// Link to the problem: https://www.codechef.com/problems/PALKINS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        if (a[i] != a[j])
        {
            if (a[i] == k)
            {
                i++;
            }
            else if (a[j] == k)
            {
                j--;
            }
            else
            {
                cout << "No" << endl;
                return;
            }
        }
        else
        {
            i++;
            j--;
        }
    }
    cout << "Yes" << endl;
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