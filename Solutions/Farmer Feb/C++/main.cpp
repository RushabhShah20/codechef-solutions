// Problem: Farmer Feb
// Link to the problem: https://www.codechef.com/problems/POTATOES
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(vector<bool> &primes)
{
    ll x, y;
    cin >> x >> y;
    ll ans = x + y;
    for (ll i = ans + 1; i <= 3000; i++)
    {
        if (primes[i])
        {
            cout << i - ans << endl;
            return;
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> primes(3000, true);
    primes[0] = primes[1] = false;
    for (ll i = 2; i * i <= 3000; i++)
    {
        if (primes[i] == true)
        {
            for (int j = i * i; j <= 3000; j += i)
            {
                primes[j] = false;
            }
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve(primes);
    }
    return 0;
}