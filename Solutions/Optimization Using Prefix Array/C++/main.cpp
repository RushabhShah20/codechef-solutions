// Problem: Optimization Using Prefix Array
// Link to the problem: https://www.codechef.com/problems/PREFPRO2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), prefix(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    prefix[0] = arr[0];
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    ll k;
    cin >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (ll i = 0; i < k; i++)
    {
        cout << prefix[b[i] - 1] - ((a[i] - 1 == 0) ? (0) : (prefix[a[i] - 2])) << endl;
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