// Problem: Prime Generator
// Link to the problem: https://www.codechef.com/problems/PRIME1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool prime(const ll n)
{
    if (n % 2 == 0)
    {
        return false;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll m, n;
    cin >> m >> n;
    for (ll i = m; i <= n; i++)
    {
        if (i == 1)
        {
            continue;
        }
        if (i == 2)
        {
            cout << i << endl;
            continue;
        }
        if (prime(i))
        {
            cout << i << endl;
        }
    }
    cout << endl;
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