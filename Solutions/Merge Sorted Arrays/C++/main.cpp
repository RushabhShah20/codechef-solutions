// Problem: Merge Sorted Arrays
// Link to the problem: https://www.codechef.com/problems/VISA05
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll m, n;
    cin >> m >> n;
    vector<ll> a(m + n), b(n);
    for (ll i = 0; i < m + n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll i = m - 1, j = n - 1, k = m + n - 1;
    while (j >= 0)
    {
        if (i >= 0 && a[i] > b[j])
        {
            a[k] = a[i];
            k--;
            i--;
        }
        else
        {
            a[k] = b[j];
            k--;
            j--;
        }
    }
    for (ll i = 0; i < m + n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}