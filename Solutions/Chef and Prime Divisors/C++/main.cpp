// Problem: Chef and Prime Divisors
// Link to the problem: https://www.codechef.com/problems/CHAPD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool HasUniquePrime(const ll a, const ll b)
{
    if (b == 1)
    {
        return false;
    }
    const ll g = __gcd(a, b);
    if (g == 1)
    {
        return true;
    }
    return HasUniquePrime(a, b / g);
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (HasUniquePrime(a, b))
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
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